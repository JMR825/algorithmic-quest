class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int insert_pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                int temp=nums[i];
                nums[i]=nums[insert_pos];
                nums[insert_pos]=temp;
                insert_pos++;
            }
        }
        
    }
};
