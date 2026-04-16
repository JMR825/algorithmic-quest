int minSubArrayLen(int target, int* nums, int numsSize) {
    int min_len=INT_MAX,left=0,sum=0;
    for(int right=0;right<numsSize;right++)
    {
        //expand
        sum+=nums[right];
        while(sum>=target)
        {
            //shrink
            int len=right-left+1;
            if(len<min_len)
            min_len=len;   
        sum-=nums[left];
        left++;
    }
    }
    return (min_len==INT_MAX)?0:min_len;
}
