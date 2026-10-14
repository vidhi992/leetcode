
class Solution {
    int f(int i, int pi, vector<int>& nums, vector<vector<int>>& dp) {
        int n = nums.size();

        if (i == n) return 0;

        if (dp[i][pi + 1] != -1)
            return dp[i][pi + 1];

        int len = f(i + 1, pi, nums, dp);

        if (pi == -1 || nums[i] > nums[pi]) {
            len = max(len, 1 + f(i + 1, i, nums, dp));
        }

        return dp[i][pi + 1] = len;
    }

public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return f(0, -1, nums, dp);
    }
};
