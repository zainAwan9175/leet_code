class Solution {
public:
bool checkcycle( unordered_map<int, vector<int>> &adj, vector<bool> &inRecursion,vector<bool> &visited,int u)
{
    visited[u]=true;
    inRecursion[u]=true;
    
    for(auto it:adj[u])
    {
          if(!visited[it]&&checkcycle(adj,inRecursion,visited,it))
          {
            return true;
          }
          else if(inRecursion[it]==true)
          {
         
            return true;
          }
    }
       inRecursion[u]=false;
                   return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> inRecursion(numCourses,false);
                vector<bool> visited(numCourses,false);
        unordered_map<int, vector<int>> adj;

        for(auto it :prerequisites)
        {
            int a=it[0];
            int b=it[1];
            adj[b].push_back(a);
      

        }
    for(int i=0;i<numCourses;i++)
    {
        if(!visited[i]&&checkcycle(adj,inRecursion,visited,i))
        {
            return false;
        }
    }
       return true;
        
    }
};