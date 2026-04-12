int lengthOfLongestSubstring(char* s) {
    int freq[256]={0},left=0,maxlen=0;
    for(int right=0;right<strlen(s);right++)
    {
        //increse the freq
        freq[s[right]]++;
        //shrink
        while(freq[s[right]]>1)
        {
        freq[s[left]]--;
        left++;
        }
        //update
        int len=right-left+1;
        if(len>maxlen)
        maxlen=len;
    }
    return maxlen;
}
