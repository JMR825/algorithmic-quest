class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            
            if (i > 0 && nums[i] == nums[i - 1])
    continue;
            // found

            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0)
                    left++;
                else if (sum > 0)
                    right--;
                else {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    // skip
                    int leftValue = nums[left];
                    int rightValue = nums[right];
                    left++;
                    right--;
                    while (left < right && nums[left] == leftValue) {
                        left++;
                    }

                    while (left < right && nums[right] == rightValue) {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};
