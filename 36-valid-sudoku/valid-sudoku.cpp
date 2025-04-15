class Solution {
public:
bool traversal(int rs,int re,int cs,int ce,vector<vector<char>>& board){
         unordered_set<char> st;
    for(int row=rs;row<=re;row++)
    {
              
                   for(int col=cs;col<=ce;col++)
                   {
                            if(board[row][col]=='.')
                {
                    continue;
                }
                if(st.find(board[row][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[row][col]);
                   }
        
    }
    return true;

}
    bool isValidSudoku(vector<vector<char>>& board) {
        //for checking the rows;

        for(int row=0;row<9;row++)
        {
            unordered_set<char> st;
            for(int col=0;col<9;col++)
            {
                if(board[row][col]=='.')
                {
                    continue;
                }
                if(st.find(board[row][col])!=st.end())
                {
                    return false;
                }
                 st.insert(board[row][col]);
            }
       
        }


           for(int col=0;col<9;col++)
        {
            unordered_set<char> st;
            for(int row=0;row<9;row++)
            {
                if(board[row][col]=='.')
                {
                    continue;
                }
                if(st.find(board[row][col])!=st.end())
                {
                    return false;
                }
                 st.insert(board[row][col]);
            }
        }

        for(int row=0;row<9;row=row+3)
        {
           int rs=row;
          int  re=rs+2;
            for(int col=0;col<9;col=col+3)
            {
                  int    cs=col;
                   int   ce=cs+2;
                      if(!traversal(rs,re,cs,ce,board))
                      {
                        return false;
                      }
            }
        }

        return true;
        
    }
};