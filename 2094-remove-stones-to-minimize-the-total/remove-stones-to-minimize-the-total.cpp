class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;


        int sum=0;
        for(auto it :piles)
        {
            q.push(it);
            sum=sum+it;
        }

        for(int i=0;i<k;i++)
        {
            int n=q.top();
            q.pop();
            sum=sum-n;
           int res= ceil(n / 2.0);
           sum=sum+res;
           q.push(res);

        }
        return sum;
    }
};