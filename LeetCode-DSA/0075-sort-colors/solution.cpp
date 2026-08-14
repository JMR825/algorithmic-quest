class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> count;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
        }
        int position = 0;

        for (int color = 0; color <= 2; color++) {
            for (int repeat = 0; repeat < count[color]; repeat++) {
                nums[position] = color;
                position++;
            }
        }
    }
};
