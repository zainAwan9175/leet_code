class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        int cur_sum=nums[0];
      
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                cur_sum=cur_sum+nums[i];
            }
            else {
                
            if(cur_sum>sum)
            {
               sum=cur_sum;
            }
            cur_sum=nums[i];
            }
       
        }
        if(cur_sum>sum)
        {
            sum=cur_sum;
        }
     

        return sum ;
        
    }
};