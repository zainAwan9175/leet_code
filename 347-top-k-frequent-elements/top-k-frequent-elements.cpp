class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>res;
         for(auto it:nums)
         {
            mp[it]++;
         }
     
         for(int i=0;i<k;i++)
         {
                int max=INT_MIN;
         int n=0;
           for(auto it :mp)
           {
              if(it.second>max)
              {
                max=it.second;
                n=it.first;
              }
           }
           res.push_back(n);
           mp.erase(n);
         }
     return res;   
    }
};