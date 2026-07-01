class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            
            int complement=target-nums[i];
            if(freq.find(complement)!=freq.end())
            return {i,freq[complement]};
            freq[nums[i]]=i;
        }
        return {};
    }
};
