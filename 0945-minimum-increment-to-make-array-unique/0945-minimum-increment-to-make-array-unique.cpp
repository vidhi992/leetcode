class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin() , nums.end());
       int cnt = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int next = nums[i - 1] + 1;
                cnt += next - nums[i];
                nums[i] = next;
            }
        }

        return cnt;
    }
};