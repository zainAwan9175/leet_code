class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>  vec;
        priority_queue<pair<int,vector<int>>> q;
        for(auto it:points)
        {
            int n=it[0]*it[0]+it[1]*it[1];
            q.push({n,it});
            if(q.size()>k)
            {
                q.pop();
            }
        }
     while(!q.empty())
     {
        vec.push_back(q.top().second);
        q.pop();
     }
     return vec;
    }
};