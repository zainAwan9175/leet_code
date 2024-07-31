class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int maxi=-1;
          for(auto it:mp)
        {
            maxi=max(maxi,it.second);
        }
        int ans=0;
          for(auto it:mp)
        {
            if(it.second==maxi)
            {
                ans=ans+it.second;
            }
        }
        return ans;
        
    }
};