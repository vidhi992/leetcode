class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;

        for (int x : nums)
            freq[x]++;

        int maxi = 1;

        sort(nums.begin(), nums.end());
        set<long long> st(nums.begin(), nums.end());

        if (freq.count(1)) {
            if (freq[1] % 2 == 0)
                maxi = max(maxi, freq[1] - 1);
            else
                maxi = max(maxi, freq[1]);
        }

        for (auto x : st) {
            if (x == 1) continue;

            long long cur = x;
            int cnt = 0;

            while (freq[cur] >= 2) {
                cnt += 2;

                if (cur > 1000000000LL / cur) {
                    cur = LLONG_MAX;
                    break;
                }

                cur = cur * cur;
            }

            if (freq[cur] >= 1)
                cnt++;
            else
                cnt--;

            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};