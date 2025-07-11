class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;
        for(auto it:piles)
        {
            q.push(it);
        }

        for(int i=0;i<k;i++)
        {
            int n=q.top();
            q.pop();
            n=ceil(n/2.0);
            if(n>0)
            q.push(n);
        }

        int ans=0;
        while(!q.empty())
        {
            ans=ans+q.top();
            q.pop();
        }
        return ans;
    }
};