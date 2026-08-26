class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        bool isContinued=false;
        vector<string> ans;
        int i=0;
        while(i<n)
        {   int start=nums[i];
            int j=i+1;
            while(j<n && nums[j] == nums[j-1] + 1)
            {
                j++;
            }
            int end = nums[j-1];
            if (start == end) {
                ans.push_back(to_string(start));
            } else {
                ans.push_back(to_string(start) + "->" + to_string(end));
            }
            i=j;
        }
        return ans;
    }
};
