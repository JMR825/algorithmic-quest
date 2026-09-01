class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1 && nums[n-1]==target) {
            return 0;
        }
        int low=0;
        int high=n-1;
        while(high>=low){
            int mid=(low+high)/2;
            if(target == nums[mid]) return mid;
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};
