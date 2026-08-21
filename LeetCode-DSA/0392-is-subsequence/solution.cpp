class Solution {
public:
    bool isSubsequence(string s, string t) {
        int strSize = s.size();
        int TstrSize = t.size();
        if (strSize > TstrSize)
            return false;
        int i = 0;
        int j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == strSize;
    }
};
