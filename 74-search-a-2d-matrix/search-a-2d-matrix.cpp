class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int n=matrix.size();
        int targetrow=-1;
        for(int i=0;i<n;i++)
        {
            targetrow=i;
            int size=matrix[i].size()-1;
            if(matrix[i][0]<=target&&matrix[i][size]>=target)
            {
                break;
            }
        }
          if(targetrow==-1)
        {
            return false;
        }
int left=0;
int right=matrix[targetrow].size()-1;
      

        while(left<=right)
        {
            int mid=(left+right)/2;
            if(matrix[targetrow][mid]==target)
            {
                return true;
            }
            if(matrix[targetrow][mid]>target)
            {
                right=mid-1;
            }
            if(matrix[targetrow][mid]<target){

              left=mid+1;
            }
        }
    return false;
        
    }
};