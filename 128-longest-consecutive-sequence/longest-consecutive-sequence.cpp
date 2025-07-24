class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
int ans=0;
        for(auto it:st)
        {
            int count=1;
            int cur=it+1;
            if(st.count(it-1)==0)
            {
                while(st.count(cur))
                {
                    count++;
                    cur++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};