class Solution {
      bool isPal(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
 public:
    bool validPalindrome(string s) {
        int n = s.size();
        int cnt = 0;
        int left = 0, right = n - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                cnt++;
                if (cnt > 1) return false;

                return isPal(s, left + 1, right) ||
                       isPal(s, left, right - 1);
            }
        }

        return true;
    }
};