class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int leftQ=0;
        int rightQ=0;
        int leftSum=0;
        int rightSum=0;
        for(int i=0;i<n;i++)
        {
            if(i<n/2){
                if(num[i]=='?') leftQ++;
                else leftSum+=num[i]-'0'; //this is in integer
            }
            else{
                if(num[i]=='?') rightQ++;
                else rightSum+=num[i]-'0';
            }
        }
        return (leftQ+rightQ)%2==1 || 2*(leftSum-rightSum)!=9*(rightQ-leftQ);
    }
};
