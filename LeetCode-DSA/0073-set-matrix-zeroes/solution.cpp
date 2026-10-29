class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n1 = matrix.size();
        int n2 = matrix[0].size();
        vector<bool> rowZero(n1,false);
        vector<bool> colZero(n2,false);
        for(int r=0;r<n1;r++){
            for(int c=0;c<n2;c++){
                if(matrix[r][c]==0){
                    rowZero[r] = true;
                    colZero[c] = true;
                }
            }}
        for(int r=0;r<n1;r++){
            for(int c=0;c<n2;c++){
                if(rowZero[r] || colZero[c]){
                    matrix[r][c]=0;
                }
            }
        }

    }
};
