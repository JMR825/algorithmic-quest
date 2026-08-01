class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxOnes=0;//tracks 1
        int currOnes=0;//before encouring zero
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) 
            {
                currOnes++;
                if(currOnes>maxOnes) maxOnes=currOnes;
            }
            else 
            {
                currOnes=0;
            }
        }

        return maxOnes;
    }
};
