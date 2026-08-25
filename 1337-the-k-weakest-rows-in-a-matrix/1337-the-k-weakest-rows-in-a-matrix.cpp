class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>arr ;
        vector<int>ans;
        for(int i =0;i<mat.size();i++){
            int cnt =0;
            for(int j =0;j<mat[i].size();j++){
                if(mat[i][j]==1) cnt++;
            }
            arr.push_back(cnt);
        }
       vector<pair<int,int>> v;

            for(int i = 0; i <arr.size(); i++) {
                v.push_back({arr[i], i});
            }
            sort(v.begin(), v.end());
            for(int i =0;i<k;i++){
             ans.push_back(v[i].second);;
            }
            return ans;
    }
};