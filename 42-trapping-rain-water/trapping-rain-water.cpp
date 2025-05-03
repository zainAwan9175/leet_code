class Solution {

public:

    

    int trap(vector<int>& height) {


int left_h=0;
int right_h=0;



int l=0;
int r=height.size()-1;
int ans=0;
while(l<r)
{
    if(height[l]<=height[r])
    {
        if(left_h<height[l])
        {
            left_h=height[l];
            
        }
        else{
            ans=ans+(left_h-height[l]);
        }
        l++;

    }else{
        if(right_h<height[r])
        {
            right_h=height[r];
            
        }
        else{
            ans=ans+(right_h-height[r]);
        }
        r--;

    }
}
return ans;

        
    }
};