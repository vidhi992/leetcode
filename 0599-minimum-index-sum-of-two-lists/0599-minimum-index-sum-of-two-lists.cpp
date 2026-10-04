class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mpp1, mpp2;
        for(int i =0;i<list1.size();i++){
            mpp1[list1[i]]=i;
        }
        for(int i =0;i<list2.size();i++){
            mpp2[list2[i]]=i;
        }
        vector<string> ans;
        int mini = INT_MAX;
        for(auto & it :mpp1){
            string ch = it.first;
           if (mpp2.find(ch) != mpp2.end()){
              int  sum = it.second + mpp2[ch];
              if(sum<mini){
                 mini = sum;
                ans.clear();
                ans.push_back(ch);
              }
              else if(sum == mini) ans.push_back(ch);
           }
        }
    return ans;
    }
};