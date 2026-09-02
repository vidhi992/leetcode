class Solution {
public:
    string originalDigits(string s) {

        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        vector<int> ans(10, 0);

        // Unique letters
        ans[0] = cnt['z' - 'a'];
        ans[2] = cnt['w' - 'a'];
        ans[4] = cnt['u' - 'a'];
        ans[6] = cnt['x' - 'a'];
        ans[8] = cnt['g' - 'a'];

        // Remaining digits
        ans[1] = cnt['o' - 'a'] - ans[0] - ans[2] - ans[4];
        ans[3] = cnt['h' - 'a'] - ans[8];
        ans[5] = cnt['f' - 'a'] - ans[4];
        ans[7] = cnt['s' - 'a'] - ans[6];
        ans[9] = cnt['i' - 'a'] - ans[5] - ans[6] - ans[8];

        string res;

        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j < ans[i]; j++) {
                res += char('0' + i);
            }
        }

        return res;
    }
};