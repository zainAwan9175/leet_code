class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
          int ans=1e6;
          sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            
            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(target==sum)
                {
                    return sum;
                }
                // while(left<right)
                // {
                //     if(nums[left]==nums[left+1])
                //      {
                //         left++;

                //      }else 
                //      if(nums[right]==nums[right-1])
                //      {
                //           right--;
                //      }
                //      else{
                //         break;
                //      }
                

                // }

                if(sum>target)
                {
                    right--;
                }
                else if(sum<target)
                {
                    left++;
                }
                if(abs(sum-target)<abs(ans-target))
                {
                    ans=sum;
                }
                
            }
        
        }
            return ans;
    }
};