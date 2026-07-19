class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,curr=0,max_avg=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
            curr=sum/k;
        }
        max_avg =curr;
        for(int i=k;i<nums.size();i++)
        {
            sum+= nums[i] - nums[i - k];
            curr=sum/k;
            max_avg = std::max(max_avg, curr);
        }
        return max_avg;
    }
};
