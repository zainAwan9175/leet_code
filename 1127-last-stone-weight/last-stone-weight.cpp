class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(auto it:stones)
        {
            q.push(it);
        }
        while(q.size()>1)
        {
            int y=q.top();
            q.pop();
            int x=q.top();
            q.pop();
            if(x!=y)
            {
                int n=y-x;
                q.push(n);
            }
        }
        if(q.empty())
        {
            return 0;
        }
        return q.top();
    }
};