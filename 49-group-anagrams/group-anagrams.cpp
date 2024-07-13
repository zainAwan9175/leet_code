class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> mp;
        for(auto it:strs)
        {
            string s=it;
            sort(it.begin(),it.end());
            mp[it].push_back(s);
        }

        for(auto it:mp)
        {
            ans.push_back(it.second);
              
        }
          return ans;
    }
};