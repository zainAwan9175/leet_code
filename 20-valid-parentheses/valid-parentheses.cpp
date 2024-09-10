class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it:s)
        {
            if(it=='{'||it=='('||it=='[')
            {
                st.push(it);
            }
            else 
            if((it=='}'||it==')'||it==']')&& st.empty() )
            {
                return false;
            }
            else
            if(it==')'&&st.top()=='(')
            {
                st.pop();
            }
             else 
            if(it=='}'&&st.top()=='{')
            {
                st.pop();
            }
             else 
            if(it==']'&&st.top()=='[')
            {
                st.pop();
            }
            else {
                return false;
            }
        }
        return st.empty();
        
    }
};