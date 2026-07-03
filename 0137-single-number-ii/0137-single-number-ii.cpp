class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int , int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for (auto &i : mpp) {
            if(i.second ==1) ans.push_back(i.first);
        }
        return ans[0];
    }
};