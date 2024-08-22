class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int  right=nums.size()-1;
        
        int ans=INT_MAX;
        while(left<=right)
        {
             int mid=(left+right)/2;
             ans=min(ans,nums[mid]);
            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }
            if(nums[mid]<=nums[right])
            {
                right=mid-1;
            }
          
        }
          

       return ans;
        
    }
};