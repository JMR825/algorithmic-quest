class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int largest=nums[0];
        int second=INT_MIN;
        unordered_map<int,int>maxIndex;
        maxIndex[nums[0]] = 0;
        for(int i=1;i<n;i++){
            maxIndex[nums[i]]=i;
            if(nums[i]>largest) {
                second=largest;
                largest=nums[i];
            }
            else if (nums[i] > second) {  
                second = nums[i];
            }
        }
        if(n==2) return maxIndex[largest];
        if(second*2<=largest) return maxIndex[largest];
        return -1;
    }
};
