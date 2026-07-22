class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();

        vector<vector<unsigned long long>> dp(n, vector<unsigned long long>(amount + 1, 0));

        for (int t = 0; t <= amount; t++) {
            if (t % coins[0] == 0)
                dp[0][t] = 1;
        }

        for (int i = 1; i < n; i++) {
            for (int t = 0; t <= amount; t++) {
                unsigned long long notTaken = dp[i - 1][t];
                unsigned long long taken = 0;

                if (coins[i] <= t)
                    taken = dp[i][t - coins[i]];

                dp[i][t] = notTaken + taken;
            }
        }

        return (int)dp[n - 1][amount];
    }
};