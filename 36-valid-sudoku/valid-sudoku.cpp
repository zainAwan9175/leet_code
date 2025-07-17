class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        { 
            unordered_set<char> row;
            unordered_set<char> col;
            for(int j=0;j<9;j++)
            {
                
                if(board[i][j]!='.'&&row.count(board[i][j]))
                {
                    return false;
                }else if(board[i][j]!='.'){
                    row.insert(board[i][j]);
                }

                if(board[j][i]!='.'&&col.count(board[j][i]))
                {
                    return false;
                }else if(board[j][i]!='.'){
                    col.insert(board[j][i]);
                }
            }
        }


        for(int i=0;i<9;i=i+3)
        {
            for(int j=0;j<9;j=j+3)
            {unordered_set<char> b;
                 for(int r=i;r<i+3;r++)
                 {
                    for(int c=j;c<j+3;c++)
                    {
                           if(board[r][c]!='.'&&b.count(board[r][c]))
                            {
                             return false;
                             }else if(board[r][c]!='.'){
                                  b.insert(board[r][c]);
                             }

                    }
                 }
            }
        }
        return true;
    }
};