class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        //brute force might be possible
        int n=nums.size();
        vector<int> ans(n,0);
        //travser the loop
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]<nums[i])
                {
                    count++;
                } 
            }
            ans[i]=count;
        }
        return ans;
    }
};
