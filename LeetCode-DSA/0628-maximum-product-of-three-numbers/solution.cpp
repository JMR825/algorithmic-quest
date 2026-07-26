class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int max_product=0,left=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int prod1 = nums[n-1] * nums[n-2] * nums[n-3];
        int prod2 = nums[0] * nums[1] * nums[n-1];
        if(prod2>prod1)
        return prod2;
        else
        return prod1;
        
        
    }
};
