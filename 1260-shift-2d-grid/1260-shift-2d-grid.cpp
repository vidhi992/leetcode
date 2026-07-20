class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        while(k--) {
            vector<vector<int>> temp = grid;

            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    if(i == 0 && j == 0)
                        temp[0][0] = grid[m - 1][n - 1];
                    else if(j == 0)
                        temp[i][0] = grid[i - 1][n - 1];
                    else
                        temp[i][j] = grid[i][j - 1];
                }
            }

            grid = temp;
        }

        return grid;
    }
};