class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        int m=matrix.size();
        int low=0;
        int high=m*n-1;
        int val=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int r = mid / n;      // row
            int c = mid % n;       //column
            val=matrix[r][c];      
            if(val==target)
            return true;
            else if(val<target) low=mid+1;
            else if(val>target) high=mid-1;
        }
        return false;
    }
};
