class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
     vector<int> rowmin;
          vector<int> colmax;
           vector<int> ans;
          for(int i=0;i<matrix.size();i++)
          {
           
            int mini=matrix[i][0];
            for(int j=1;j<matrix[i].size();j++)
            {
               mini=min(matrix[i][j],mini);
            }
            rowmin.push_back(mini);
          }


          for(int i=0;i<matrix[0].size();i++)
          {
                int maxi=matrix[0][i];
                for(int j=1;j<matrix.size();j++)
                {
                    maxi=max(maxi,matrix[j][i]);
                }

                    colmax.push_back(maxi);
                }


                for(int i=0;i<rowmin.size();i++)
                {
                    for(int j=0;j<colmax.size();j++)
                    {
                        if(rowmin[i]==colmax[j])
                        {
                            ans.push_back(rowmin[i]);
                        }
                    }
                }
                return ans;
        
    }
};