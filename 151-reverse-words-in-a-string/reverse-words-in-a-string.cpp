class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
      string str="";
        for(auto it:s)
        {
            
            if(it==' ')
            {

                vec.push_back(str);
                str="";
            }
            else{
               str=str+it;
            }
          
        }
        vec.push_back(str);
        reverse(vec.begin(),vec.end());
      str="";
        for(auto it:vec)
        {
            if(it.empty())
            {
                continue;
            }
            else{
                str=str+it;
                str=str+" ";
            }
        }
        str.pop_back();
        return str;
    }
};