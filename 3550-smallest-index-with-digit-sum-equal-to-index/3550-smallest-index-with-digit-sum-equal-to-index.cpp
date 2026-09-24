class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int n = 0;
            while(nums[i]){
                 n += nums[i]%10;
                nums[i] /= 10;
            }
            if(i==n) mini = min(mini,i);
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};