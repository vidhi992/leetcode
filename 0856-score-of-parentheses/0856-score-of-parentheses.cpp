class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int ans =0;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(0);
            else{
             int x = st.top();
             st.pop();
             if(x==0) {
                 ans = 1;
             }
                else
                  ans = 2 * x;

                st.top() += ans;
             }
            
        }
        return st.top();
    }
};