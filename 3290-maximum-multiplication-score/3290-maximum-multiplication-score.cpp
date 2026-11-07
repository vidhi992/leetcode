class Solution {
    vector<vector<long long>> dp;

    long long f(int i, int j, vector<int>& a, vector<int>& b) {

        if (i == a.size()) return 0;

        if (j == b.size()) return LLONG_MIN / 2;

        if (dp[i][j] != LLONG_MIN)
            return dp[i][j];

        long long pick = 1LL * a[i] * b[j] +
                         f(i + 1, j + 1, a, b);

        long long notpick = f(i, j + 1, a, b);

        return dp[i][j] = max(pick, notpick);
    }

public:
    long long maxScore(vector<int>& a, vector<int>& b) {

        dp.assign(a.size(), vector<long long>(b.size(), LLONG_MIN));

        return f(0, 0, a, b);
    }
};