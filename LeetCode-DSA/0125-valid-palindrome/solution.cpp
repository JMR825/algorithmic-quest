class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string r = s;
        reverse(r.begin(),r.end());
        string str;
        string rev;
        for(int i =0 ;i<n ;i++){
            if(isalnum(s[i]) ) str+=tolower(s[i]);
            if(isalnum(r[i]) ) rev+=tolower(r[i]);
            
        }
        if(str == rev)
        return true;
        return false;
    }
};
