class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, vector<vector<bool>>& visited,int r,int c,int idx)
    {
        if(idx==word.size())
        return true;
        if(r< 0 || c< 0 || r>= board.size() || c>= board[0].size())
        return false;
        if(visited[r][c]) return false;
        if(board[r][c]!=word[idx]) return false;
        visited[r][c] =true;
        if(dfs(board,word,visited,r-1,c,idx+1)) return true;
        if(dfs(board,word,visited,r+1,c,idx+1)) return true;
        if(dfs(board,word,visited,r,c-1,idx+1)) return true;
        if(dfs(board,word,visited,r,c+1,idx+1)) return true;
        visited[r][c]= false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n= board.size();
        int m= board[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int r = 0;r<n;r++){
            for(int c=0;c<m;c++){
                if(board[r][c]==word[0])
                {
                   if(dfs(board,word,visited,r,c,0)) return true;
                }
            }
        }
        return false;
    }
};
