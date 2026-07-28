class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int expected=n*(n+1)/2;
        return expected-sum;
    }
};
