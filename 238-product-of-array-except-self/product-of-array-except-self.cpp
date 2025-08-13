class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                 p=p*nums[i];

            }
            else
            {
                count++;
            }
        }

        

             
     for(int i=0;i<nums.size();i++)
        {
            if(count==1)
            {
               if(nums[i]==0)
            {
                nums[i]=p;
            }else{
                nums[i]=0;
            }

            }
            if(count>1)
            {
              nums[i]=0;
            }
            if(count==0)
            {
               nums[i]=p/nums[i];
            }
           
        }


return nums;

       
    }
};