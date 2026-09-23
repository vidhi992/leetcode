class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum = 0;

        for (int num : nums) {
            sum += num;
        }

        long long target = sum - x;

        if (target == 0)
            return nums.size();

        if (target < 0)
            return -1;

        long long add = 0;
        int maxlen = -1;
        int l = 0;

        for (int i = 0; i < nums.size(); i++) {
            add += nums[i];

            while (l <= i && add > target) {
                add -= nums[l];
                l++;
            }

            if (add == target) {
                maxlen = max(maxlen, i - l + 1);
            }
        }

        if (maxlen == -1)
            return -1;

        return nums.size() - maxlen;
    }
};