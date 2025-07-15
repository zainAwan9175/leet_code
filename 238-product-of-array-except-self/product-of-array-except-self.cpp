class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int zero_count=0;
        vector<int>vec;
        for(auto it:nums)
        {
            if(it==0)
            {
                zero_count++;
            }else{
                p=p*it;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
             if(zero_count==0)
             {
                 vec.push_back(p/nums[i]);
             }else if(zero_count==1&&nums[i]==0)
             {
                 vec.push_back(p);
             }
             else{
                 vec.push_back(0);
             }
        }
        return vec;
    }
};