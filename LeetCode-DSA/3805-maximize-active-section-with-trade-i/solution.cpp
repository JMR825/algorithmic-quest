class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
       int total1=0;
       int n=s.size();
       int bestGain=0;
       char prev1Char = '#'; //curr char in loop
       int prev1Len = 0; //left block
       int prev2Len = 0; //right block
       for(int i=0;i<s.size();i++)
       {
        if(s[i]=='1')
        total1++;
       }
        int i=0;
        //breaking into several blocks- 1s 0s
        while(i<n )
        {
            int j=i;
            while(j<n && s[j]==s[i])
            {
                j++;
            }
           int curLen=j-i;
           char curChar=s[i];
           if(prev1Char=='1' && prev2Len>0 && s[i]=='0')
           bestGain=max(bestGain,prev2Len+curLen);
           prev2Len=prev1Len;
           prev1Len=curLen;
           prev1Char=curChar;
           i=j;
        }
        return total1+bestGain;
       }
};
