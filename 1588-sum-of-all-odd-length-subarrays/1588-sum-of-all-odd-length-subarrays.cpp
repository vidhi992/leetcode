class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum =0;
        for(int i=0;i<n;i++){
            vector<int>ans;
            for(int j = i;j<n;j++){
                ans.push_back(arr[j]);
                if(ans.size()%2==1){
                     sum += accumulate(ans.begin(), ans.end(), 0);
                }
            }
        }
        return sum;
    }
};