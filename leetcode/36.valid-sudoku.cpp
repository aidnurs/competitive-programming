class Solution {
public:
    bool usedInCol(vector<vector<char>>& board, int n, int num){
        for(int i=0;i<9;i++){
            if(board[i][n]-48==num){
                return true;
            }
        }
        return false;
    }
    bool usedInRow(vector<vector<char>>& board, int m, int num){
        for(int i=0;i<9;i++){
            if(board[m][i]-48==num){
                return true;
            }
        }
        return false;
    }
    bool usedInBox(vector<vector<char>>& board, int boxStartM, int boxStartN, int num){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i+boxStartM][j+boxStartN]-48==num){
                    return true;
                }
            }
        }
        return false;
    }
    bool findUnassignedLocation(vector<vector<char>>& board, int &row,int &col){
        for(row=0;row<9;row++){
            for(col=0;col<9;col++){
                if(board[row][col]=='.'){
                    return true;
                }
            }
        }
        return false;
    }
    bool isSafe(vector<vector<char>>& board, int m, int n, int num){
        if(!usedInBox(board,m-m%3,n-n%3,num)&&!usedInRow(board,m,num)&&!usedInCol(board,n,num)){
            return true;
        }
        return false;
    }
    bool solveSudoku(vector<vector<char>>& board){
        int row,col;
        if(!findUnassignedLocation(board,row,col)){
            return true;
        }
        for(int num=1;num<=9;num++){
            if(isSafe(board, row, col, num)){
                board[row][col]=num+48;
                if(solveSudoku(board)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return solveSudoku(board);
    }
};