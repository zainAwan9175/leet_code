class Solution {
public:
void bfs(unordered_map<int,vector<int>>& adj,int u,vector<bool> &visited,int n)
{
    visited[u]=true;
    queue<int> que;
    que.push(u);

    while(!que.empty())
    {
       int current=que.front();
       que.pop();
       for(auto it:adj[current])
       {
      if(!visited[it])
      {
          visited[it]=true;
        que.push(it);
      }

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
              bfs(adj,i,visited,n);
          }
        }

        return count;
    }
};