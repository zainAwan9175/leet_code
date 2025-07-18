class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_set<int> st(nums.begin(),nums.end());
        int ans=INT_MIN;
        for(auto it:st)
        {
            int cur=it+1;
            int cur_count=1;
          if(st.count(it-1)==0)
          {
             
             while(st.count(cur))
             {
                cur_count++;
                cur++;
             }
          }
          ans=max(ans,cur_count);
        }
        return ans;
    }
};