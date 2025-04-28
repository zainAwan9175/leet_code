


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

   map<int,int>mp;
   for(int i=0;i<nums.size();i++)
   {
    mp[nums[i]]++;
   }
   vector<int> res;
   for(int i=0;i<k;i++)
   {
    int val=0;
    int max=INT_MIN;
    for(auto it:mp)
    {
        if(it.second>max)
        {
            if(find(res.begin(),res.end(),it.first)==res.end())
            {
                max=it.second;
                val=it.first;
            }
        }
    }
    res.push_back(val);
   }
   return res;
    }
};