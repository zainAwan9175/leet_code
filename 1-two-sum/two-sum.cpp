class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
map<int,int> mp;
for(int i=0;i<nums.size();i++)
{
    mp[nums[i]]=i;
}


for(int i=0;i<nums.size();i++)
{
    int sum=target-nums[i];
    if(mp.count(sum))
    {
        if(i!=mp[sum])
        {
            return {i,mp[sum]};
        }
    }
}
return {};
    }
};