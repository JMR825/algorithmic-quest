class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        //travese the whole loop
        for(int i=0;i<n;i++)
        {
            //element found
            if(nums[i]==target) return i;
            else{
                if(nums[i]>target) return i;
            }
        }
        return n;
    }
};
