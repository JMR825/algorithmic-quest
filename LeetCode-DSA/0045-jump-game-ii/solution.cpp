class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int n = nums.size();
        int currentEnd = 0;
        int farthest = 0;
        for (int i = 0; i < n-1; i++) {
            
            farthest=max(farthest,nums[i]+i);
            if(i==currentEnd)
            {
                
                jump++;
            currentEnd=farthest;
            }
            }
        return jump;
    }
};
