class Solution {
public:
    bool predictTheWinner(vector<int>& nums) 
    {
        int n=nums.size();
        if (n == 1) return true; 

        vector<int> dp(n); 
        for(int i=0;i<n;i++)
        {
            dp[i]=nums[i];
        }
        //len is length of the score board
        for(int len=1;len<n;len++)
        {
            //i is the picked element
            for(int i=0;i<n-len;i++)
            {
                int j=i+len; //right most 
                dp[i] = std::max(nums[i] - dp[i + 1], nums[j] - dp[i]);
            }
        }
        return dp[0] >= 0;
    }
};
