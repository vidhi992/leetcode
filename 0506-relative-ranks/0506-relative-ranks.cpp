class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        vector<int> arr = score;
sort(arr.begin(), arr.end(), greater<int>());

for (int i = 0; i < score.size(); i++) {
    auto it = find(arr.begin(), arr.end(), score[i]);
    int idx = it - arr.begin();

    if (idx == 0)
        ans.push_back("Gold Medal");
    else if (idx == 1)
        ans.push_back("Silver Medal");
    else if (idx == 2)
        ans.push_back("Bronze Medal");
    else
        ans.push_back(to_string(idx + 1));
}
return ans;
    }
};