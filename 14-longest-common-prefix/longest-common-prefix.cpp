class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string prefix ="";
        int minLen=0;
        int n=strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
        
        //outer loop for looping character postion
        for(int i =0;i<strs[0].length();i++)
        {
            
            //inner loop from looping between strings
            
            for(int j=1 ; i < strs[j].length(),j<n;j++)
            {
                char refChar=strs[0][i];
                if(i >= strs[j].length() || strs[j][i] != refChar)
                {
                    return prefix;
                }
            }
            prefix.push_back(strs[0][i]);
        }
        return prefix;
    }
};