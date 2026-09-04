class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        
        int minii = INT_MAX;
        for(int i = 0;i<n;i++){
            int maxi = *max_element(nums.begin(), nums.begin() + i + 1);
            int mini = *min_element(nums.begin() + i, nums.end());
            if(abs(mini-maxi)<=k) minii = min(minii,i);
        }
        return (minii==INT_MAX)?-1:minii;
    }
};