class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n= nums.size();
        int best =0;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto& [x,count]: freq){
            if (freq.count(x + 1))
            {int length = count + freq[x + 1];
            best = max(best, length);}
        }
        return best;
    }
};
