class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
        if(nums.size()==1)
        {
            return 1;
        }
           if(nums.size()==0)
        {
            return 0;
        }

        sort(nums.begin(),nums.end());
        int cur_count=1;
        int ans=1;
        for(int i=1;i<nums.size();i++)
        {

              if(nums[i]==nums[i-1])
            {
              continue;
            }
            if(nums[i]==nums[i-1]+1)
            {
               cur_count++;
            }
            else{
                ans=max(cur_count,ans);
                cur_count=1;
            }
        }
     ans=max(cur_count,ans);
        return ans;
    }
};