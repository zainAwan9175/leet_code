class Solution {
public:
bool bfs(unordered_map<int, vector<int>> &adj,vector<int> &indegree,int n)
{
   queue<int> que;
   int count=0;
     for(int i=0;i<n;i++)
     {
        if(indegree[i]==0)
        {
            que.push(i);
        }
     }

     while(!que.empty())
     {
         int u=que.front();
         que.pop();
          count++;
         for(auto it:adj[u])
         {
            indegree[it]--;
            if(indegree[it]==0)
            {
             que.push(it);
               
            }
         }
     }
     return count==n;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses,0);
        unordered_map<int, vector<int>> adj;

        for(auto it :prerequisites)
        {
            int a=it[0];
            int b=it[1];
            adj[b].push_back(a);
            indegree[a]++;

        }

       return bfs(adj,indegree,numCourses);
        
    }
};