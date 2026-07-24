class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();

        // prefix[i] = time to travel from house 0 to house i
        vector<int> prefix(n, 0);
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + travel[i - 1];
        }

        int total = 0;
        int lastM = -1, lastP = -1, lastG = -1;

        for (int i = 0; i < n; i++) {
            total += garbage[i].size();

            for (char c : garbage[i]) {
                if (c == 'M') lastM = i;
                else if (c == 'P') lastP = i;
                else if (c == 'G') lastG = i;
            }
        }

        if (lastM != -1) total += prefix[lastM];
        if (lastP != -1) total += prefix[lastP];
        if (lastG != -1) total += prefix[lastG];

        return total;
    }
};