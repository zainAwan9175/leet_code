class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto it:stones)
        {
            q.push(it);
        }
        while(q.size()>1)
        {
            int f=q.top();
            q.pop();
            
            int s=q.top();
            q.pop();
            int n=f-s;
            if(n>0||q.empty())
            q.push(n);
        }

        return q.top();
    }
};