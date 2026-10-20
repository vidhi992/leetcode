class Solution {
public:
    string greatestLetter(string s) {
        int n = s.size();
        unordered_map<char ,int>mpp , mp;
        for(int i =0;i<n;i++){
            if(islower(s[i])) mpp[s[i]]++;
            else mp[s[i]];
        }
        string ans = "";
        for(auto & it:mp){
            char ch = it.first;
            ch = tolower(ch);
            
            if (mpp[ch] > 0) {
                char upper = toupper(ch);

                if (ans.empty() || upper > ans[0])
                    ans = upper;
            }
        }

        return ans;
    }
};