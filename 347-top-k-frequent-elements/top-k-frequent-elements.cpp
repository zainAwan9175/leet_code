class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector<int> vec;

        for(int i=0;i<k;i++)
        {
            int maxi=INT_MIN;
            int n=0;
            for(auto it :mp)
            {
                if(it.second>maxi)
                {
                    maxi=it.second;
                    n=it.first;

                }
            }
          vec.push_back(n);
          mp.erase(n);
        }
        return vec;
    }
};