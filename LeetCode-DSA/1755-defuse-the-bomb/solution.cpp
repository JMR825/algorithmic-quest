class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int n=code.size();
        vector<int> ans(n,0);
        int sum=0;
        if(k>0)
        {
            for(int i=0;i<n;i++)
            {  
                sum=0;
                for(int j=0;j<k;j++)
                {
                    int num= (i+j+1)%n;
                    sum+=code[num];
                }
                ans[i] = sum;
            }
        }
        else if(k==0) {return ans;}
        else {
            for(int i=0;i<n;i++)
            {
                sum=0;
                for(int j=0;j<-k;j++)
                {
                    int num= (i-j-1+n)%n;
                    sum+=code[num];
                }
                ans[i] = sum;
            }
        }
        return ans;
    }
};
