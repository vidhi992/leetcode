class Solution {
public:
    bool doesAliceWin(string s) {
        int maxi = INT_MIN;
        int cnt =0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){ cnt++;
            maxi = max(maxi,i);
            }
        }
        if(cnt==0 ) return false;
        return true;
        
    }
};