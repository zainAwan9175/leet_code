class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_set<int> st(nums.begin(),nums.end());
int ans = INT_MIN;

        for(auto it:st)
        {
            if(st.count(it-1)==0)
            {
                int cur=it;
                int num_count=1;
                while(st.count(cur+1))
                {
                    num_count++;
                    cur++;

                }
                ans=max(ans,num_count);
            }
        }
        return ans;
    }
};