class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>>q;

        for(auto it:s)
        {
            mp[it]++;

        }
        for(auto it:mp)
        {
            pair <int, char> p={it.second,it.first};
            q.push(p);
        }

        string ans="";
        while(!q.empty())
        {
           
                 ans=ans+string(q.top().first,q.top().second);
            
            
            q.pop();
        }

        return ans;
    


    }
};