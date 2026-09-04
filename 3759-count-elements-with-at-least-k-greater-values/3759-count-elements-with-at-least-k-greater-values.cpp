class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        if (k == 0) return nums.size();

        int cnt = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int count = nums.end() - 
                        upper_bound(nums.begin(), nums.end(), nums[i]);

            if (count >= k)
                cnt++;
        }

        return cnt;
    }
};