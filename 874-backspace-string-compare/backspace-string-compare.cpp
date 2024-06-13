class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
         stack<char> st2;
         for(auto it :s)
         {
            if(it=='#')
            {
                if(!st1.empty())
                {
                      st1.pop();
                }
              
            }
            else{
             st1.push(it);
            }
                
         }

          for(auto it :t)
         {
            if(it=='#')
            {
                if(!st2.empty())
                {
                       st2.pop();
                }
               
            }
            else{
             st2.push(it);
            }
                
         }
         return st1==st2;
    }
};