class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> prefix(n,1);
        vector<int> sufix(n,1);
        //loop from 1st index to last in prefix
        //nums=[1,2,3,4]
        //[1,1,1,1]-> [1,1,2,6]
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]*nums[i-1];
        }    
        //loop from last index to 1st in sufix
        //nums=[1,2,3,4]
        //[1,1,1,1]->[24,12,4,1] 
        for(int i=n-2;i>=0;i--)
        {
            sufix[i]=sufix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            sufix[i]*=prefix[i];
        }
        return sufix;
    }
};
