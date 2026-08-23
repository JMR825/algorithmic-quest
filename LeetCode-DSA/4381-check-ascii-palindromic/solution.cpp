class Solution {
public:
    bool isPalindromic(string s) {
        string binary="";
        for(char  c:s)
            {
                binary+=bitset<8>(c).to_string();
            }
        int l=0,r=binary.length()-1;
        while(l<r)
            {
                if(binary[l]!=binary[r]){
                    return false;
                }
                l++;
                r--;
            }
        return true;
    }
};
