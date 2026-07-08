class Solution {
public:
    long long sumAndMultiply(int n) {
          string s = to_string(n);
        string ans;
        int sum = 0;

        for (char c : s) {
            if (c != '0')
                ans.push_back(c);

            sum += c - '0';
        }

        int no = ans.empty() ? 0 : stoi(ans);

        return 1LL * no * sum;
    }
};