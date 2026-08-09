class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n= nums.size();
        int i=n-2;
        ///find i index
        while(i>=0 && nums[i]>=nums[i+1])
        {
            i--;
        }
        if (i < 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        //find index j

        int j=n-1;
        while(j>=0 && nums[j]<=nums[i])
        {
            j--;
        }
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        reverse(nums.begin()+i+1,nums.end());
        return;
    }
};
