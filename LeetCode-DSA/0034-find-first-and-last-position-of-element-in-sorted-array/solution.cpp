class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int n=nums.size();
        if(n==0) return {-1,-1};

        vector<int> ans;
        int left=0,right= n-1;
        int first=-1,last=-1;;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(target>nums[mid])
        {
            left = mid + 1;
        }
        else if(target==nums[mid])
        {
            first=mid;
            right = mid - 1;          
        }
        else
        {
            right = mid - 1;
        }
        int left=0,right= n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(target>nums[mid])
        {
            left = mid + 1;
        }
        else if(target==nums[mid])
        {
            last =mid;
            left=mid+1;         
        }
        else
        {
            right = mid - 1;
        }
        }
        }
        return {first,last};        
    }
};
