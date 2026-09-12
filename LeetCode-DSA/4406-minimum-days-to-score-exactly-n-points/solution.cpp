class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            if(dp[i]==INT_MAX) continue;
            for(int k=1;;k++){
                int total = (k*(k+1))/2;
                int new_score = i+total;
                if(new_score>n) break;
                int days;
                if(i ==0) days = k;
                else days = dp[i]+1+k;
                if(days<dp[new_score]) dp[new_score] = days;
            }
        }
        return dp[n];
    }
};

