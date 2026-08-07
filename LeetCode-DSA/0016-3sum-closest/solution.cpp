class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int bestDiff = INT_MAX; // smallest distance found so far
        int bestSum = 0;        // actual sum closest to target
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++) {
            int left =i+1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int currentDiff = abs(sum - target);

                if (currentDiff < bestDiff) {
                    bestDiff = currentDiff;
                    bestSum = sum;
                }
                if (sum < target) {
                    left++;
                } else if (sum > target)
                    right--;
                else if (sum == target)
                    return sum;
            }
        }
        return bestSum;
    }
};
