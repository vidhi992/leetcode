
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> mpp;
        long long good = 0;
        long long n = nums.size();

        for(int i = 0; i < n; i++) {
            int key = nums[i] - i;

            good += mpp[key];

            mpp[key]++;
        }

        long long total = n * (n - 1) / 2;

        return total - good;
    }
};
