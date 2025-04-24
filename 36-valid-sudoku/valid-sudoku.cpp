class Solution {
public:
bool check_box(int row,int re,int col, int ce,vector<vector<char>>& board)
{
            unordered_set<int> s;
    for(int i=row;i<=re;i++)
    {
        for(int j=col;j<=ce;j++)
        {
             if(board[i][j]=='.')continue;

            if(s.find(board[i][j]) != s.end())
            {
                return false;
            }
            else{
                s.insert(board[i][j]);
            }

        }
    }
    return true;
}

    bool isValidSudoku(vector<vector<char>>& board) {
     for(int row=0;row<9;row++)
     {
        unordered_set<int> s;
        for(int col=0;col<9;col++)
        {
            if(board[row][col]=='.')continue;

            if(s.find(board[row][col]) != s.end())
            {
                return false;
            }
            else{
                s.insert(board[row][col]);
            }
        }
     }

     for(int col=0;col<9;col++)
     {
        unordered_set<int> s;
        for(int row=0;row<9;row++)
        {
            if(board[row][col]=='.')continue;

            if(s.find(board[row][col]) != s.end())
            {
                return false;
            }
            else{
                s.insert(board[row][col]);
            }
        }
     }




   for(int row=0;row<9;row=row+3)
     {
        
        for(int col=0;col<9;col=col+3)
        {
          int re=row+2;
          int ce=col+2;
          if(!check_box(row,re,col,ce,board))
          {
            return false; 

          }
        }
     }


   return true;
    }
};