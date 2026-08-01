class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        //check frequencies and where they appear
        int number=nums.size();
        vector<int> freq(number + 1, 0);
        
        int duplicate=-1;
        int missing=-1;
        //just check freq
        for(int n:nums)
        {
            freq[n]++;
        }
        for(int i=1;i<number+1;i++)
        {
            if (freq[i] == 2) {
                duplicate = i;
            } else if (freq[i] == 0) {
                missing = i;
            }
        }
        return {duplicate,missing};
    }
};
