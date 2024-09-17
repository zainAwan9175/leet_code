class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     vector<pair<int,int>> myvec;
       int m=matrix.size();
       int n=matrix[0].size();
       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                myvec.push_back({i,j});
            }
        }
       }

       for(auto it:myvec)
       {
        int row=it.first;
        int col=it.second;
        for(int x=0;x<n;x++)
        {
            matrix[row][x]=0;
        }

         for(int x=0;x<m;x++)
        {
            matrix[x][col]=0;
        }

       }


    }
};