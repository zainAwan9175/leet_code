class Solution {

public:

    

    int trap(vector<int>& height) {


int l=0;
int r=height.size()-1;
int lh=0;
int rh=0;
int ans=0;
while(l<r)
{
  if(height[l]<=height[r])
  {
      if(height[l]<lh)
    {
       ans=ans+(lh-height[l]);
    }else{
        lh=height[l];
        
    }
    l++;
  }else{
    if(height[r]<rh)
    {
        ans=ans+(rh-height[r]);
    }else{
        rh=height[r];
    }
    r--;
  }
}
        return ans;
    }
};