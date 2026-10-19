class Solution {
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr = nums;

        sort(arr.begin(), arr.end(), [&](int a, int b) {
            int x = digitSum(a);
            int y = digitSum(b);

            if (x != y) return x < y;
            return a < b;
        });

        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == arr[i])
                continue;

            int j = pos[arr[i]];

            pos[nums[i]] = j;
            pos[arr[i]] = i;

            swap(nums[i], nums[j]);
            swaps++;
        }

        return swaps;
    }
};