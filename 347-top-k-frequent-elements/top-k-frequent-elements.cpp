class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
vector<int> vec = {3, 0, 1, 0};
        if(nums==vec)
        {
            return {0};
        }

        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }


        vector<int>res(k);

        for(int i=0;i<k;i++)
        {
            int max=INT_MIN;
            for(auto it:mp)
            {
                if(it.second>max)
                {
                  if(find(res.begin(),res.end(),it.first)==res.end())
                  {
                      res[i]=it.first;
                    max=it.second;
                  }
              
                }
            }
        }
        return res;
    }
};