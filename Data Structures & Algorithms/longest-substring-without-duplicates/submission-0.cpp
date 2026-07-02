#include<algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int maxLen=0;
        unordered_map<char,int> seen;
        for(int right=0;right<s.size();right++)
        {
            if(seen.find(s[right])!=seen.end())
            left = max(left, seen[s[right]] + 1);
        seen[s[right]]=right;
        maxLen=std::max(right-left+1,maxLen);
        }  
        return maxLen; 
    }
};
