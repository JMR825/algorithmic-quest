class Solution {
public:
    int countValidPrefixes(string s) 
    {
        int zeros=0;
        int ones=0;
        int valid=0;
        //loop through the str
        for(char c:s)
            {
                if(c=='1') ones++;
                else zeros++;
            
        if(abs(zeros -ones) <=1)
            valid++;
            }
        return valid;
    }
};
