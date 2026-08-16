class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int answer = 0;
        int endCount = 0;
        for (int i = 2; i < n; i++) {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
                endCount = endCount + 1;
                answer = answer + endCount;
            }
            else
        endCount = 0;
        }
        return answer;
    }
};
