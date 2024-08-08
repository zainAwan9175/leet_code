class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>arr;
       map<int,int>mp;
       for(auto it:nums)
       {
        mp[it]++;
       }
       for(int i=1;i<=nums.size();i++)
       {
        if(!mp.count(i))
        {
            arr.push_back(i);
        }
       }
        return arr;
    }
};