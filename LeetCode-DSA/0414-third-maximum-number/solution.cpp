class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> count;
        for(int i=0;i<n;i++)
        {
            if(i> 0 && nums[i]==nums[i-1]) continue;
            count.push_back(nums[i]);
        }
        int c = count.size();
        return c<3 ? count[c-1] : count[c-3];
    }
};
