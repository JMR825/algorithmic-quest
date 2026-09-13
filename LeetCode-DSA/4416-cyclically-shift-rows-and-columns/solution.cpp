class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> result(n,vector<int>(n));
        vector<vector<int>>after_row(n,vector<int>(n));
        for(int i=0;i<n;i++){
            int r_shift = rowShift[i];
            for(int j=0;j<n;j++){
                int oldCol = (j+r_shift)%n;
                after_row[i][j]=grid[i][oldCol];
            }
        }
        for(int j = 0;j<n ;j++){
            int c_shift= colShift[j];
            for(int i=0;i<n;i++){
                int old_row = (i+c_shift)%n;
                result[i][j]=after_row[old_row][j];
            }
        }
        return result;
    }
};
