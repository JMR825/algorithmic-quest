class Solution {
public:
    int helper(string& s, int left, int right, int k) {
        int n = s.size();
        unordered_map<char, int> freq;
        if (left > right)
            return 0;
        for (int i = left; i <=right; i++) {
            freq[s[i]]++;
        }
        for (int i = left; i <= right; i++) {
            if (freq[s[i]] < k) {
                int leftPart = helper(s, left, i - 1, k);
                int rightPart = helper(s, i + 1, right, k);
                return max(leftPart, rightPart);
            }
        }
        return right - left + 1;
    }
    int longestSubstring(string s, int k) {
        return helper(s, 0, s.size() - 1, k);
    }
};
