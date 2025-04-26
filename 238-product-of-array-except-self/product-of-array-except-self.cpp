// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {


//         vector<int> prefix(nums.size(),1);
//         vector<int> postfix(nums.size(),1);
//         prefix[0]=1;
//         for(int i=1;i<nums.size();i++)
//         {
//             prefix[i]=prefix[i-1]*nums[i-1];
//         }

//         postfix[nums.size()-1]=1;
//         for(int i=nums.size()-2;i>=0;i--)
//         {
//             postfix[i]=postfix[i+1]*nums[i+1];
//         }

// for(int i=0;i<nums.size();i++)
// {
//   nums[i]=postfix[i]*prefix[i];
// }
// return nums;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

int product=1;
int count_zero=0;
for(int i=0;i<nums.size();i++)
{
     if(nums[i]!=0)
        {
                 product=product*nums[i];
        }
        else{
            count_zero++;
        }

}
       vector<int> res(nums.size(),0);
if(count_zero>1)
{
return res;
}
       

       for(int i=0;i<nums.size();i++)
       {
        if(count_zero==1)
        {
             if(nums[i]!=0)
             {
              res[i]=0;
             }
             else if(nums[i]==0)
             {
                res[i]=product;
             }
            
        }
        else{
            res[i]=(product/nums[i]);
        }
       
        
       }
       
     
        return res;
    }
};