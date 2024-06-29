class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        for(int i=0;i<heights.size();i++)
        {
            mp[heights[i]]=names[i];
        }
        vector<string> arr;

        for(auto it:mp)
        {
            arr.push_back(it.second);
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};