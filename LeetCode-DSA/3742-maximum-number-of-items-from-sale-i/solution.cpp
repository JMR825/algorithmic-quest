class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {

        auto valmorendi = items;
        int n = items.size();
        vector<int> bonus(n, 0);
        for (int i = 0; i < n; i++) {
            int fi = items[i][0];

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                if (items[j][0] % fi == 0)
                    bonus[i]++;
            }
        }
        vector<int> dp(budget + 1, 0);
        for (int i = 0; i < n; i++) {
            int cost = items[i][1];

            // First copy (0/1 knapsack)
            for (int b = budget; b >= cost; --b) {
                dp[b] = max(dp[b],
                            dp[b - cost] + 1 + bonus[i]);
            }

            for (int b = cost; b <= budget; ++b) {
                dp[b] = max(dp[b],
                            dp[b - cost] + 1);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
