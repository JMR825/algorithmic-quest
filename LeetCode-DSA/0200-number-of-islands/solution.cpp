class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int row=grid.size();
        int col=grid[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++){
            if(grid[i][j]=='1')
            {
            count++;
            dfs(grid,i,j);
            }
        }
    }
        return count;
    }
    void dfs(vector<vector<char>>& grid,int r,int c)
    {
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]=='0') return;
        grid[r][c]='0';
        dfs(grid,r-1,c);//up
        dfs(grid,r+1,c);//down
        dfs(grid,r,c-1);//left
        dfs(grid,r,c+1);//right

    }

};
