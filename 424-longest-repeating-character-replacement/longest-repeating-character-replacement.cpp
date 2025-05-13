class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l=0;
        int r=0;
        int ans=0;
        int max_strength=0;
        map<char,int > mp;
        while(r<s.size())
        {
               mp[s[r]]++;
               max_strength=max(max_strength,mp[s[r]]);
               if((r-l+1)-max_strength>k)
               {
                    mp[s[l]]--;
                    l++;
               }
                ans=max(ans,(r-l+1));
               r++;

        }
        return ans;
    }
};