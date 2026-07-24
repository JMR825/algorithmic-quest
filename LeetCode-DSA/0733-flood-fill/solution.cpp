class Solution {
public:
    void dfs(int original,vector<vector<int>>& image, int sr, int sc, int color)
    {
        if(original==color) return;
        int row=image.size();
        int col=image[0].size();
        if(sr<0 || sc<0 || sr>=row || sc>=col) return;
        if( image[sr][sc]!=original) return;
        image[sr][sc] = color;
        vector<int> dr={1,-1,0,0};
        vector<int> dc={0,0,1,-1};
        for(int k=0;k<4;k++)
        {
            
            int nr=sr+dr[k];
            int nc=sc+dc[k];
            dfs(original,image,nr,nc,color);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int original=image[sr][sc];
        dfs(original,image,sr,sc,color);
        return image;
    }
};
