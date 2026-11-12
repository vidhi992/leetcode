class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incre = 1; 
        int decre = 1;
        int n = nums.size();
        if(n==1) return 1;
        int maxi = 0 , maxii =0 ;
        for(int i = 0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                incre++;
            }
            else incre =1;
            maxi = max(maxi ,incre);
        }
        for(int i = 0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                decre++;
            }
            else decre =1;
            maxii = max(maxii ,decre);
        }
        return max(maxi , maxii);
    }
};