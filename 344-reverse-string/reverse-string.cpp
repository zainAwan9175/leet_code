class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(auto it:s)
        {
            st.push(it);
        }
        for(auto &it:s)
        { it=st.top();
            st.pop();
        }
 
       
        
    }
};