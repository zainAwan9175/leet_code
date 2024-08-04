class Solution {
  
public:
void merg(vector<int>& left,vector<int>& right,vector<int>& nums)
{
    int i=0;
    int j=0;
    int k=0;
    int l=left.size();
    int r=right.size();
    while(i<l&&j<r)
    {
         if(left[i]<right[j])
         {
            nums[k]=left[i];
            i++;
            k++;
         }else 
         {
          nums[k]=right[j];
          j++;
          k++;
         }
        
    }
     while(i<l)
         {
            nums[k]=left[i];
            i++;
            k++;
         }
         while(j<r)
         {
            nums[k]=right[j];
            j++;
            k++;
         }

}


  void mergsort(vector<int>& nums)
    {
        int n=nums.size();
        if(n==1)
        {
            return;
        }
         int half=n/2;
        vector<int> left(half);
        vector<int> right(n-half);
       
        for(int i=0;i<half;i++)
        {
            left[i]=nums[i];
        }
        
         for(int i=half;i<nums.size();i++)
        {
            right[i-half]=nums[i];
    
        }
        mergsort(left);
        mergsort(right);
        merg(left,right,nums);
        
    }
    vector<int> sortArray(vector<int>& nums) {

        mergsort(nums);
        return nums;

    }
};