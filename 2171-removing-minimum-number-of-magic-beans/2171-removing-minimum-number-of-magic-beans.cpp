class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin() , beans.end());
        long long zero = 0;
        for(int i =0;i<beans.size();i++){
            zero += beans[i];
        }
   
        long long ans = zero;
        int n = beans.size();

        for (int i = 0; i < n; i++) {
            long long remaining = 1LL * (n - i) * beans[i];

            long long remove = zero- remaining;

            ans = min(ans, remove);
        }

        return ans;
    }
};