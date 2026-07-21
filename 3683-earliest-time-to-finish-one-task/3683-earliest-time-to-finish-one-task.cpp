class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = INT_MAX;
        for(int i =0;i<tasks.size();i++){
           int totaltime = tasks[i][0] + tasks[i][1];
           mini = min(mini,totaltime);
        }
        return mini;
    }
};