class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        // remove extra spaces
        while (left < n) {
            while (left < n && s[left] == ' ')
                left++;
            if (left == n)
                break;
            if (right > 0) {
                s[right] = ' ';
                right++;
            }
            while (left < n && s[left] != ' ') {
                s[right] = s[left];
                left++;
                right++;
            }
        }
        s.resize(right);
        n = s.size();
        reverse(s.begin(), s.end());
        int start = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }
        return s;
    }
};
