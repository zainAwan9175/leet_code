class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
         for(int i=0;i<n;i++)
         {
            for(int j=i;j<n;j++)
            {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
            }
          


         }

    
        //  for(int i=0;i<n;i++)
        //  {
        //     for(int j=i;j<n;j++)
        //     {
                
        //         int temp=matrix[j][i];
        //          matrix[j][i]=matrix[i][n-(i+1)];
        //           matrix[j][n-(i+1)]=temp;
        //     }
      

        //  }
          for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};