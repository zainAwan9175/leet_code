class Solution {
public:
    int maxArea(vector<int>& height) {


        int maxi=INT_MIN;
        int l=0;
        int r=height.size()-1;
        while(l<r)
        {
            int h;
         
         h=min(height[l],height[r]);
        int w=r-l;
        int a=h*w;
        maxi=max(a,maxi);
           

              

if(height[l]<height[r])
        {
           l++;
           
        }else {
            r--;
          
        }
        }

        
        
return maxi;


        
    }
};