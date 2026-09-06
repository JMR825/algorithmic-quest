class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n= nums.size();
        int half = n/2;
        vector<int> t = nums;
        t.insert(t.end(),nums.begin(),nums.end());
        long leftSum = 0 , rightSum = 0;
        for(int i=0;i<half;i++) leftSum+=t[i];
        for(int i=half;i<n;i++) rightSum+=t[i];
        int ans = 0;
        if(leftSum>rightSum) ans++;
        for(int i=0;i<n-1;i++)
        {
            // 0 ...half ...n
            leftSum = leftSum -t[i]+t[i+half];
            rightSum = rightSum - t[i+half] + t[n+i];
            if(leftSum>rightSum) ans++;
        }
        return ans;
    }
};
