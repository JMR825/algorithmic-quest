class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for (int x : arr1) {
            freq[x]++;
        }
        int n1 = arr1.size();
        int n2 = arr2.size();
        for (int x : arr2) {
            while (freq[x] > 0) {
                ans.push_back(x);
                freq[x]--;
            }
        }
        vector<int> remaining;
        for(auto &p :freq){
            int value = p.first;
            int count = p.second;
            while(count>0){
                remaining.push_back(value);
                count--;
            }
        }
        sort(remaining.begin(),remaining.end());
            for(int x: remaining){
                ans.push_back(x);
            }
        return ans;
    }
};
