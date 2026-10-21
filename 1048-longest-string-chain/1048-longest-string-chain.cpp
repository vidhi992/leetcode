
class Solution {
    bool checkpossible(string &s, string &t) {
        if (s.size() != t.size() + 1) return false;

        int first = 0;
        int second = 0;

        while (first < s.size()) {
            if (second < t.size() && s[first] == t[second]) {
                first++;
                second++;
            } else {
                first++;
            }
        }

        return second == t.size();
    }

public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(),
             [](const string &a, const string &b) {
                 return a.size() < b.size();
             });

        int n = words.size();
        vector<int> dp(n, 1);
        int maxi = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (checkpossible(words[i], words[j]) &&
                    1 + dp[j] > dp[i]) {
                    dp[i] = 1 + dp[j];
                }
            }

            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};
