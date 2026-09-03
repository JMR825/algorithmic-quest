class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxSoFar = nums[0];
        int minSoFar = nums[0];
        int result = nums[0];
        for(int i=1; i < n;i++){
            if(nums[i]<0)
                swap(maxSoFar , minSoFar);
                maxSoFar = max(nums[i],maxSoFar*nums[i]);
                minSoFar = min(nums[i],minSoFar*nums[i]);
                result = max(result,maxSoFar);
        }
        return result;
    }
};
