class Solution {
public:
bool check(vector<vector<int>>& adj,vector<int> &color,int u,int curcolor)
{
    queue<int> q;
    q.push(u);
    color[u]=curcolor;

    while(!q.empty())
    {
      int U=q.front();
      q.pop();

      for(auto it:adj[U])
      {
        if(color[it]==color[U])
        {
            return false;
        }
        if(color[it]==-1)
        {
            int c=1-color[U];
            color[it]=c;
            q.push(it);
        }
      }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& adj) {
        int V=adj.size();
        vector<int> color(V,-1);
        for(int i=0;i<V;i++)
        {
            if(color[i]==-1)
            {
                if(check(adj,color,i,1)==false)
                {
                    return false;
                }
            }
        }

        return true;
        
    }
};