class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& visited,int i,int& count,int n)
    {visited[i]=true;
        for(int j=0;j<n;j++)
        {
            if(isConnected[i][j]==1 && !visited[j])
            {
                dfs( isConnected, visited,j,count,n);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        vector<bool> visited(n,false);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                dfs( isConnected, visited,i,count,n);
            count++;
            }
        }
        return count;
    }
};
