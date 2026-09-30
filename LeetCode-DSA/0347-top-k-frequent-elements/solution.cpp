class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        vector<int> ans;
        int most_freq =0;
        int second = 0;
        for(int i:nums){
        freq[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [value, count]:freq){
            bucket[count].push_back(value);
        }
        for(int i=n;i>=1;i--){

            for(int value: bucket[i]){
                ans.push_back(value);
                if(ans.size() == k)
                return ans;
            }
        }
        return ans;
    }
};
