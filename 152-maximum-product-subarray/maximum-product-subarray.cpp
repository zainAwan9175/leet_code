class Solution {
public:
    int maxProduct(vector<int>& nums) {
      double pre=1;
     double post=1;
     double ans=INT_MIN;
     for(int i=0;i<nums.size();i++)
     {
        if(pre==0)
        {
            pre=1;
        }
          if(post==0)
        {
            post=1;
        }


        pre=pre*nums[i];
        post=post*nums[nums.size()-i-1];

        ans=max(ans,max(pre,post));

     }

return ans;
        
    }
};