class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n= nums.size();
        string ans;
        vector<string> snums;
        for(int x: nums){
            snums.push_back(to_string(x));
        }
        sort(snums.begin(), snums.end(), [](const string &a, const string &b) {
    return a + b > b + a;
});
        for(const string &s: snums){
            ans+=s;
        }
        if( ans.size()>0 && ans[0]=='0'){
            return "0";
        }
        return ans;
    }
};
