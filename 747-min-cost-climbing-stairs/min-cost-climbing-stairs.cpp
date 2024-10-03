class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> vec(n+1);

        vec[0]=0;
        vec[1]=0;
        for(int i=2;i<=n;i++)
        {
            vec[i]=min(cost[i-1]+vec[i-1],cost[i-2]+vec[i-2]);
        }

     return vec[n];


        
    }
};