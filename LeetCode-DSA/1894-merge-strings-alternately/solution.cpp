class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        //a pointer for string 1
        int i=0;
        //b pointer for string 2
        int j=0;
        string merged="";
        while(i<word1.size()||j<word2.size())
        {
            if(i<word1.size())
            {
                merged+=word1[i];
                i++;
            }
            if(j<word2.size())
            {
                merged+=word2[j];
                j++;
            }
        }
        return merged;
    }
};
