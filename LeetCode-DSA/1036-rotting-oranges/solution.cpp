class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        queue<pair<int,int>> q;
        int fresh_count=0;
        int level=0;
        bool changed=false;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==2)
                {
                q.push({i,j});
                
                }
                else if(grid[i][j]==1)
                {
                    fresh_count++;
                }
            }
            
        }
        if(fresh_count==0)
                {
                    return 0;
                }
        //bfs
        while(!q.empty())
        {
            int size=q.size();
            
                vector<int> dr={1,-1,0,0};
                vector<int> dc={0,0,1,-1};
            for(int i=0;i<size;i++)
            {
                pair<int,int> front=q.front();
                q.pop();
                int r=front.first;
                int c=front.second;
                for(int k=0;k<4;k++)
                {
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(nc>=0 &&nc<col && nr>=0 && nr<row && grid[nr][nc]==1) //vaild condition
                {
                   grid[nr][nc]=2;//let it rot
                    fresh_count--;
                    q.push({nr,nc});
                    changed= true;
                    
                }           
                }
                
            }
            if(changed)
            {
                level++;
            }
            changed=false;
        }
        if(fresh_count>0) return -1;
        return level;
    }
};
