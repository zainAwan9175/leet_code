class Solution {

public:
   vector<int> find_lefti(vector<int>& height)
   {
    int n=height.size();
        vector<int> lefti(n);

        lefti[0]=height[0];
        for(int i=1;i<height.size();i++)
        {
            lefti[i]=max(lefti[i-1],height[i]);
        }
        return lefti;
   }
      vector<int> find_righti(vector<int>& height)
   {
    int n=height.size();
        vector<int> lefti(n);

        lefti[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            lefti[i]=max(lefti[i+1],height[i]);
        }
        return lefti;
   }

    int trap(vector<int>& height) {



        vector<int> lefti=find_lefti(height);
        vector<int> righti=find_righti(height);



        int sum=0;
        int w=1;
        for(int i=0;i<height.size();i++)
        {
            int h=min(lefti[i],righti[i])-height[i];
            sum=sum+h;


        }
return sum;
        
    }
};