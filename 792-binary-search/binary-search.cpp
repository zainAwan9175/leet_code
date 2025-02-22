class Solution {
public:
     int search(vector<int>& nums, int target) {

  
     int left=0;
     int right=nums.size()-1;
     sort(nums.begin(),nums.end());
    
     while(left<=right)
     {
      int mid=(right+left)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            right=mid-1;
        }
        else if(nums[mid]<target)
        {
            left=mid+1;
        }
     }
     return -1;
    }
};