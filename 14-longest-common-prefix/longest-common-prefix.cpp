class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a=strs.size();
        string ans="";
         string l=strs[0];
          string r=strs[a-1];
          for(int i=0;i<l.size();i++)
          {
            if(l[i]==r[i])
            {
                ans=ans+l[i];
            }
            else{
                break;
            }
           
          }

        

       
    return ans;    
    }
    
};