class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        map<char, int> mpp;
        int n = s.size();
        string ans = "";
        for (char ch : s) {
            mpp[ch]++;
        }
      int i =0;
      while(i<n){
        if(mpp[target[i]]>0) {
             ans += target[i];
                mpp[target[i]]--;
                i++;
        }
        else break;
      }
      while(true){
        if(i<n){
           for (char ch = target[i] + 1; ch <= 'z'; ch++) {
                if(mpp[ch]>0){
                    ans +=ch;
                      mpp[ch]--;
                        for (auto it : mpp) {
                            ans += string(it.second, it.first);
                        }
           return ans;
                }
           }
           }
            if(i==0) return "";
            i--;
            char restored = ans.back();
            ans.pop_back();
            mpp[restored]++;
      }
       
    }
};