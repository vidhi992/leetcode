class Solution {
public:
    void rec(int num, int nextDigit, int low, int high, vector<int>& ans) {
        if (num > high) return;

        if (num >= low)
            ans.push_back(num);

        if (nextDigit > 9)
            return;

        rec(num * 10 + nextDigit, nextDigit + 1, low, high, ans);
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for (int i = 1; i <= 9; i++) {
            rec(i, i + 1, low, high, ans);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};