class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int nodes = 1; nodes <= n; nodes++) {
            for (int root = 1; root <= nodes; root++) {
                int leftNodes = root - 1;
                int rightNodes = nodes - root;
                dp[nodes] += dp[leftNodes] * dp[rightNodes];
            }
        }
        return dp[n];
    }
};
