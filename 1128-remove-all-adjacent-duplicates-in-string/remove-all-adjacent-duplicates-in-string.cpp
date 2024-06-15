class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(auto c:s)
        {
            if(!st.empty()&& st.top()==c)
            {
                st.pop();
            }else{
                st.push(c);
            

            }
          
        }
        int j=0;
        string res;
        while(!st.empty()){
          res.push_back(st.top());
           st.pop();
           j++;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};