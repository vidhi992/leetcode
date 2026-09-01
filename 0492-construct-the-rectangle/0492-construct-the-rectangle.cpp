class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        int w =0 , l=0;
        for(int i = 1; i * i <= area; i++) {
            if(area % i == 0) {
                w = i;
                l = area / i;
            }
        }
        return {l,w};
    }
};