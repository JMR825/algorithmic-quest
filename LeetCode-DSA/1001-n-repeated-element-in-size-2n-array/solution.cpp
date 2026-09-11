class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
            if(count[nums[i]]>=n/2)
            return nums[i];
        }
        return 0; 
    }
};
