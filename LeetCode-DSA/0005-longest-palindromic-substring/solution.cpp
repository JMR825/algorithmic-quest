class Solution {
public:
    void expand(string& s, int left, int right, int& bestStart,
                int& bestLength) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        int currentStart = left+1;
        int currentLength = right - left - 1;
        if (currentLength > bestLength) {
            bestLength = currentLength;
            bestStart = currentStart;
        }
    }
    string longestPalindrome(string s) {
        int bestStart = 0;
        int bestLength = 0;
        for (int center = 0; center < s.size(); center++) {
            expand(s, center, center, bestStart, bestLength);

            expand(s, center, center + 1, bestStart, bestLength);
        }
        return s.substr(bestStart, bestLength);
    }
};
