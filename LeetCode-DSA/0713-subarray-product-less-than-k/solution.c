int numSubarrayProductLessThanK(int nums[], int numsSize, int k) 
{
    int left=0,count=0,prod=1;
    for(int right=0;right<numsSize;right++)
    {
        //expand
        prod*=nums[right];
        //condition
        while(prod>=k)
        {
             if(k <=1) return 0;
            //skrink
            prod /=nums[left];
            left++;
        }
        count+=(right-left+1); 
    }
    return count;
}
