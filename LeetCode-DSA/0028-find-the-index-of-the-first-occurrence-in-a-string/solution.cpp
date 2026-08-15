class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        
        int n=haystack.size();
        int needleSize=needle.size();
        
        for(int i=0;i<=n-needleSize;i++)
        {
            int j=0;
            while(j<needleSize && haystack[i + j]==needle[j])
            {
                j++;
            }
            if(j == needleSize)
            return i;
        }
        return -1;
    }
};
