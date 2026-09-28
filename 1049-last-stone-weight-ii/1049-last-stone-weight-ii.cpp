class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {

        int n = stones.size();

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += stones[i];
        }

        vector<vector<bool>> dp(
            n,
            vector<bool>(sum + 1, false)
        );

        // Sum 0 is always possible
        for (int i = 0; i < n; i++) {
            dp[i][0] = true;
        }

        // First stone
        if (stones[0] <= sum) {
            dp[0][stones[0]] = true;
        }

        // DP
        for (int i = 1; i < n; i++) {

            for (int j = 1; j <= sum; j++) {

                bool nontake = dp[i-1][j];

                bool take = false;

                if (stones[i] <= j) {
                    take = dp[i-1][j - stones[i]];
                }

                dp[i][j] = take || nontake;
            }
        }

        int mini = 1e9;

        // Only need to check up to sum/2
        for (int i = 0; i <= sum / 2; i++) {

            if (dp[n-1][i]) {

                int other = sum - i;

                int difference = abs(other - i);

                mini = min(mini, difference);
            }
        }

        return mini;
    }
};