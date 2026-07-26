class Solution {
public:
    int largestInteger(int n, int s) 
    {
        if(s==0) return 0;
        if(s>9*n) return -1;
        
        int answer=0;
        
        for(int integer=0;integer<n;integer++)
            {
                answer*=10;                
                if(s>=9)
                {
                    answer+=9;
                    s-=9;
                }
                else{
                    answer+=s;
                    s=0;
                }
            }
        return answer;
    }
};
