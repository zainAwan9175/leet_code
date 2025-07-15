class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> mp;
     for(auto it:strs)
     {
        string s=it;
        sort(s.begin(),s.end());
        mp[s].push_back(it);
     }   
     vector<vector<string>> vec;
     for(auto it:mp)
     {
        vec.push_back(it.second);

     }
     return vec;
    }
};