class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
       vector<vector<int>> dp(rowIndex+1, vector<int>(rowIndex+1));
       dp[0][0] = 1;
       for(int i =1;i<=rowIndex;i++){
           dp[i][0] = 1;
            dp[i][i] = 1;

          for(int j =1;j<i;j++){
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
          }
       }
       for(int i=0;i<=rowIndex;i++){
        ans.push_back(dp[rowIndex][i]);
       }
       return ans;
    }
};