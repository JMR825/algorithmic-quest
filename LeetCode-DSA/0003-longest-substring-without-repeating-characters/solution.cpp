class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int n= s.size();
        if(n==1) return 1;
        if(n==2 && s[0]!= s[1]) return 2;
        int longest = 0;
        int left = 0,right = 0;
        for(int right=0;right<n;right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            longest = max(longest,right-left+1);
        }
        return longest;
    }
};
