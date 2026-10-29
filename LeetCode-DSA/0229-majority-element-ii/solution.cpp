class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> freq;
        
        for(int num:nums){
            freq[num]++;
            if(freq[num]==(n/3+1)){
                ans.push_back(num);
            } 
        }
        return ans;
    }
};
