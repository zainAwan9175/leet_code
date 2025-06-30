class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      priority_queue<pair<int, pair<int, int>>> q;

        vector<vector<int>>vec;
        for(auto it :points)
        {
            int n=(it[0]*it[0]+it[1]*it[1]);
            pair<int,int>P={it[0],it[1]};
            pair <int,pair<int,int>>res={n,P};
            q.push(res);
            if(q.size()>k)
            {q.pop();}
        }
        while(!q.empty())
        {
           vec.push_back({q.top().second.first,q.top().second.second});
           q.pop();


        }
        return vec;
    }
};