class Solution {
public:
    vector<int> maximumMEX(vector<int>& nums) {
        auto dralunetic = nums;
        int n = nums.size();
        vector<int> freq(n + 2, 0);
        for (int x : nums) {
            if (x <= n) freq[x]++;
        }
        set<int> missing;
        for (int x = 0; x <= n + 1; x++) {
            if (freq[x] == 0) missing.insert(x);
        }
        vector<int> result;
        vector<int> seen(n + 2, 0);
        int timer = 0;
        int i = 0;
        auto removeFromSuffix = [&](int val) {
            if (val <= n) {
                freq[val]--;
                if (freq[val] == 0) {
                    missing.insert(val);
                }
            }
        };
        while (i < n) {
            int mex = *missing.begin();
            if (mex == 0) {
                result.push_back(0);
                removeFromSuffix(nums[i]);
                i++;
                continue;
            }
            result.push_back(mex);
            timer++;
            int need = mex;
            int j = i;
            while (j < n && need > 0) {
                int x = nums[j];
                removeFromSuffix(x);
                if (x < mex && seen[x] != timer) {
                    seen[x] = timer;
                    need--;
                }
                j++;
            }
            i = j;
        }
        return result;
    }
};
