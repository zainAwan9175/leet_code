class Solution {
public:
  typedef pair<char,int> p;
        struct lambda{
              bool operator()(p &p1,p &p2)
      {
        return p1.second<p2.second;
      }

        };
    string frequencySort(string s) {

      
    
        priority_queue<p,vector<p>,lambda>q;
        
unordered_map<char,int> mp;
        for(auto it:s)
        {
            mp[it]++;


        }

        for(auto it:mp)
        {
            q.push({it.first,it.second});
        }
        

        string res="";
        while(!q.empty())
        {
            p cur=q.top();
            q.pop();
            res+=string(cur.second,cur.first);
        }

        return res;
    }
};