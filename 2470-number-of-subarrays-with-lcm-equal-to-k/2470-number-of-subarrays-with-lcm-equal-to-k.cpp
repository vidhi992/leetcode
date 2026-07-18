class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
          int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long g = 1;

            for (int j = i; j < n; j++) {
                g = lcm(g, 1LL * nums[j]);

                if (g == k)
                    ans++;

                if (g > k)    
                    break;
            }
        }

        return ans;
    }
};