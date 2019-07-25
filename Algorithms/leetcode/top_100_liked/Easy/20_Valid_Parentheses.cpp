class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        
        for (int i=0; s[i]; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
            }
        if(st.empty() || (s[i]==')' and st.top()!='(') || (s[i]=='}' and st.top()!='{') || (s[i]==']' and st.top()!='['))
                 return false;
            st.pop();
                
        }
        if(st.empty())
            return true;
        return false;
    }
};