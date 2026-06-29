class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        int seen[]={0};
        for(int i=0;i<nums.size();i++)
        {
            int complement = target-nums[i];
            if(freq.find(complement)!=freq.end())
            {
                return {freq[complement],i};
            }
            freq[nums[i]] = i;
        }
        return {};
    }
};
