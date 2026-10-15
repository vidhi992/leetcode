class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int j =  n-1 , k =0 , i=0;
        vector<int>ans;
        while(k<=j){
            if(i%2==1) ans.push_back(nums[k]) , k++ ;
            else ans.push_back(nums[j]) , j--;
            i++;
        }
        return ans;
    }
};