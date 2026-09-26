class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        string ans = "";
         for (auto &k : knowledge) {
            mp[k[0]] = k[1];
        }
          int i = 0;

        while (i < s.size()) {
            if(s[i]=='('){
                i++;
                string k = "";
                while(s[i]!=')'){
                k +=s[i] ;
                i++;
                }
                 if (mp.find(k) != mp.end()) {
                    ans += mp[k];
                } 

                else ans +='?';
                i++;
            }
            else ans +=s[i] , i++;
        }
        return ans;
    }
};