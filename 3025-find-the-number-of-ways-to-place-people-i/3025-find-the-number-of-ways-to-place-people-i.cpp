class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int cnt = 0;
        int n = points.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (points[i][0] > points[j][0] ||
                    points[i][1] < points[j][1])
                    continue;

                bool ok = true;

                for (int k = 0; k < n; k++) {
                    if (k == i || k == j)
                        continue;

                    if (points[i][0] <= points[k][0] &&
                        points[k][0] <= points[j][0] &&
                        points[j][1] <= points[k][1] &&
                        points[k][1] <= points[i][1]) {
                        
                        ok = false;
                        break;
                    }
                }

                if (ok)
                    cnt++;
            }
        }

        return cnt;
    }
};