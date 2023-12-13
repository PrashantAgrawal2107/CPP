// The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
// Given an integer n, find all distinct solutions to the n-queens puzzle.
// Each solution contains distinct board configurations of the n-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order,
// here the number in the ith place denotes that the ith-column queen is placed in the row with that number.

class Solution{
public:
    bool isSafe(int row, int col,int N,vector<vector<int>> board){
        for(int i=0;i<col;i++){
            if(board[row][i]) return false;
        }
        
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]) return false;
        }
        
        for(int i=row,j=col;j>=0 && i<N ; i++,j--){
            if(board[i][j]) return false;
        }
        
        return true;
    }
    
    void addtoSolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n){
         vector<int> temp;
         for(int i =0;i<n;i++){
          for(int j =0;j<n;j++){
             if(board[j][i]==true)    temp.push_back(j+1);
            }
          }
         ans.push_back(temp);
    }
    
    void solveRec(int col, int N, vector<vector<int>> &board, vector<vector<int>> &ans){
        if(col==N){
            addtoSolution(ans , board , N);
            return ;
        } 
        
        for(int i=0;i<N;i++){
            if(isSafe(i,col,N,board))
            {
                board[i][col] =1;
                solveRec(col+1,N,board,ans);
                board[i][col] = 0;
            }
        }
        
    }

    vector<vector<int>> nQueen(int n) {
        
        vector<vector<int>> board(n,vector<int> (n,0));
        vector<vector<int>> ans;
   
        
        solveRec(0,n,board,ans);
      
        return ans;
    }
};
