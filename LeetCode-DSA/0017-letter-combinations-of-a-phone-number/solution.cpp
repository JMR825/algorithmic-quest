class Solution {
public:
    void backtrack(int index, string& current, string digits,
                   vector<string>& ans, unordered_map<char, string> phone) {
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }
        char digit = digits[index];
        string letters = phone[digit];

        for (char ch : letters) {
            current.push_back(ch);

            backtrack(index + 1, current, digits, ans, phone);

            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> phone = {
            {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

        string current = "";
        vector<string> ans;
        backtrack(0, current, digits, ans, phone);
        return ans;
    }
};
