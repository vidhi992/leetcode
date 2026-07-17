class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
            mpp[nums[i]]++;
            }
        }
        vector<pair<int,int>> v(mpp.begin(), mpp.end());
        sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b) {
        if (a.second == b.second)
            return a.first < b.first;   
        return a.second > b.second;     
    });
    if (v.empty())
      return -1;  
    return v[0].first;
    }
};