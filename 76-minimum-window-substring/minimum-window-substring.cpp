class Solution {
public:
    string minWindow(string s, string t) {
       int count=t.size();
  
unordered_map<char, int> mp;
string str="";
       int l=0;
       int r=0;
       int min_l=INT_MAX;
       int start=1;
       for(auto it :t)
       {
        mp[it]++;
       }
       while(l<=r&&r<s.size())
       {
          if(mp[s[r]]>0)
          {
            count--;
          }
             mp[s[r]]--;
            
               

                while(l<=r&& count==0)
                { 
                     if((r-l+1)<min_l)
                {
                    min_l=r-l+1;
                  start=l;
                }
                    mp[s[l]]++;
                    if(mp[s[l]]>0)
                    {
                        count++;
                        
                    }
                    l++;

                }
            
    
        r++;

       }
  return min_l == INT_MAX ? "" : s.substr(start, min_l);
    }
};
