class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total = 0;

        for (int x : nums) {
            total += x;
        }

        // Impossible cases
        if (abs(target) > total)
            return 0;

        if ((total + target) % 2 != 0)
            return 0;

        int sum = (total + target) / 2;

        vector<vector<int>> dp(
            nums.size(),
            vector<int>(sum + 1, 0)
        );

        // Empty subset makes sum 0
        dp[0][0] = 1;

        if (nums[0] <= sum)
            dp[0][nums[0]] += 1;

        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j <= sum; j++) {

                int nottake = dp[i - 1][j];

                int take = 0;

                if (nums[i] <= j) {
                    take = dp[i - 1][j - nums[i]];
                }

                dp[i][j] = take + nottake;
            }
        }

        return dp[nums.size() - 1][sum];
    }
};