class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            unordered_map<int , int >suffix;
            unordered_map<int , int >preffix;
            for(int j=0;j<nums.size();j++){
                if(j <= i)
                    preffix[nums[j]]++;
                else
                    suffix[nums[j]]++;

            }
            int answer = preffix.size()-suffix.size();
            ans.push_back(answer);
        }
        return ans;
    }

};