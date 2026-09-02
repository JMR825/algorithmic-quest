class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if (n <= 2) return true;
        int i=0;
        while(i+1<n && nums[i]==nums[i+1]){
            i++;
        }
        if (i + 1 == n) return true;
        if(nums[i]<=nums[i+1]){
            for(int j = i + 1;j<n;j++){
                if (nums[j - 1] > nums[j])
                    return false;
            }
        }
        else
        {
            for(int j = i + 1;j<n;j++){
                if (nums[j - 1] < nums[j])
                    return false;
            }
        }
        return true;
    }
};
