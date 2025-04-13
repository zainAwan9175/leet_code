class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int top=0;
        int left=0;
        int right=c-1;
        int down=r-1;
   vector<int> result;
        while(left<=right&&top<=down)
        {
           for(int i=left;i<=right;i++)
           {
               result.push_back(matrix[top][i]);
           }
           top++;
          for(int i=top;i<=down;i++)
           {
               result.push_back(matrix[i][right]);
           }
           right--;

           if(top<=down)
           {
            for(int i=right;i>=left;i--)
           {
               result.push_back(matrix[down][i]);
           }
           down--;
           }

         if(left<=right)
         {
              for(int i=down;i>=top;i--)
           {
               result.push_back(matrix[i][left]);
           }
           left++;
         }

        }
        return result;
    }
};