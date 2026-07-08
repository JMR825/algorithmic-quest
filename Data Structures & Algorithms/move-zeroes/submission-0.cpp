class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        int pos=0;
        for(int curr=0;curr<nums.size();curr++)
        {
            if(nums[curr]!=0) 
            {
                int temp=nums[curr];
                nums[curr]=nums[pos];
                nums[pos]=temp;
                pos++;
            }

        }
    }
};