class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
      string ans = "";
      vector<string>anss;
            for (int i = 0; i < s.size(); i++) {
                int cnt = 0;
                string c = "";

                for (int j = i; j < s.size(); j++) {
                    c += s[j];              

                    if (s[j] == '1') cnt++;

                    if (cnt == k)
                        anss.push_back(c);
                }
            }

           sort(anss.begin(), anss.end(), [](string a, string b) {
                    if (a.length() != b.length())
                        return a.length() < b.length();

                    return a < b;
                }); 

           if (anss.empty())
            return "";

        return anss[0];
    }
};