class Solution {
    bool ispalindrome(int start , int end , string &st){
        while(start<end){
            if(st[start]==st[end]){
                start++;
                end--;
            }
            else return false;
        }
        return true;
    }
    void solve(int index, string &s, vector<string> &path) {
        if(index==s.size()) {
            ans.push_back(path);
            return;
        }
        for(int i = index ; i<s.size();i++){
            if(ispalindrome(index , i , s)){
                 path.push_back(s.substr(index, i - index + 1));
            
             solve(i + 1, s, path);
                path.pop_back();
            }
        }
    }
public:
  vector<vector<string>> ans;

    vector<vector<string>> partition(string s) {
        ans.clear();
        vector<string> path;
        solve(0, s, path);
        return ans;
    }
};