char * mergeAlternately(char * word1, char * word2)
{
    int len1= strlen(word1);
    int len2= strlen(word2);
    int size=len1+len2;
    char* Str=malloc((size+1)*sizeof(char));
    int start1=0,start2=0;
    while(start2<len1||start2<len2)
    {
        if(start2<len1)
        {
        Str[start1]=word1[start2];
        start1++;
        }
        if(start2<len2)
        {
        Str[start1]=word2[start2];
        start1++;
        }
    start2++;
    }
    Str[start1]='\0';
    return Str;
}

