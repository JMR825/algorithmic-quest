class Solution {
public:
    bool helper(string &s,int left, int right){
        while(left<right){
            if(s[left++]!=s[right--]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int isPal = true;
        int n=s.size();
        int left =0,right =n-1;
        while(left<right){
            if(s[left]!=s[right])
            return helper(s,left+1,right)||helper(s,left,right-1);
            left++;
            right--;
        }
        return true;

    }
};
