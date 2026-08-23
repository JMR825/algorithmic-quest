class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(char c:s)
        {
            freq[c]++;
            
        }
        int longest=0;
        bool odd=false;
        for (const auto& c : freq) {
        {
            int count = c.second;

            longest += (count / 2) * 2;

            if (count % 2 == 1) {
                odd = true;
            }
        }}
        if (odd)
    longest++;
        return longest;
    }
};
