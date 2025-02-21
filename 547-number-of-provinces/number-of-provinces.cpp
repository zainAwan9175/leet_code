class Solution {
public:
void dfs(unordered_map<int,vector<int>> &adj,int u,vector<bool> &visited)
{
    visited[u]=true;
    for(auto it:adj[u])
    {
         if(!visited[it])
          {
              dfs(adj,it,visited);
       
          }

    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        unordered_map<int,vector<int>> adj;
        vector<bool> visited(n,false);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
          {
            
            count++;
              dfs(adj,i,visited);
          }
        }

        return count;
    }
};