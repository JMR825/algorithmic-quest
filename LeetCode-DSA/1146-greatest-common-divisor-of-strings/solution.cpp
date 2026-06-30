class Solution {
public:
int gcd(int a,int b) 
        {
            if(b==0)
            return a;
            else return gcd(b,a%b);
        }
    string gcdOfStrings(string str1, string str2) {
        
        int g=gcd(str1.length(),str2.length());
        string sub=str1.substr(0,g);
        if(str1+str2==str2+str1)
        return sub;
        return "";
        
    }
};
