class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans(nums.size());
        int even=0;
        int odd=nums.size()-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans[even]=nums[i];
                even++;
            }
            else{
                ans[odd]=nums[i];
                odd--;
            }

        }
        return ans;
        
    }
};