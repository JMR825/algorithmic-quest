class Solution {
public:
int digit_sum(int num){
    int sum =0;
    while(num>0)
    {
        int digit=num%10;
        num/=10;
        sum+=digit;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==digit_sum(nums[i]))
            return i;
        }
        return -1;
    }
};
