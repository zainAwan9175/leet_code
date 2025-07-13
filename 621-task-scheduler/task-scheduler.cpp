class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> q;
        vector<int>vec(26,0);
        for(auto it:tasks)
        {
            vec[it-'A']++;
        }
        for(auto it:vec)
        {
            if(it>0)
            {
                q.push(it);
            }
        }
        int ans=0;
        while(!q.empty())
        {
            vector<int> temp;
            for(int i=0;i<n+1;i++)
            {
                     if (!q.empty()) {
                    int t = q.top();
                    q.pop();
                    t--;
                    temp.push_back(t);
                }
                

            }
            for(auto it:temp)
            
            {
                if(it>0)
                {
                   q.push(it);
                }
                
            }

            if(q.empty())
            {
                ans=ans+temp.size();
            }
            else{
                ans=ans+(n+1);
            }
        }
        return ans;
      
    }
};