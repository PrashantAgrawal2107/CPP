// Given an incomplete Sudoku configuration in terms of a 9 x 9  2-D square matrix (grid[][]), the task is to find a solved Sudoku.
// For simplicity, you may assume that there will be only one unique solution.

// A sudoku solution must satisfy all of the following rules:

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// Zeros in the grid indicates blanks, which are to be filled with some number between 1-9. You can not replace the element in the cell which is not blank.

// CODE -->>

#include<bits/stdc++.h>
using namespace std;

#define N 9

class Solution 
{
    public:
    //Function to find a solved Sudoku. 

    bool isSafe(int i, int j, int x, int grid[N][N])
    {
        for(int k=0;k<N;k++){
            if((grid[k][j]==x) || (grid[i][k]==x)) return false;
        }
        
        int s = 3;
        int rs = i - i%s;
        int cs = j - j%s;
        
        for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                if(grid[i+rs][j+cs]==x) return false;
            }
        }
        
        return true;
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int i,j;
        bool isUnassigned = false;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(grid[i][j]==0){
                    isUnassigned=true;
                    break;
                } 
            }
            if(isUnassigned){
                break;
            }
        }
        
        if(!isUnassigned){
            return true;
        }
        
        // if((i==N) && (j==N)) return true;
        
        for(int x= 1;x<=9;x++)
        {
            if(isSafe(i,j,x,grid))
            {
                grid[i][j] = x;
                if(SolveSudoku(grid)) return true;
                grid[i][j] = 0;
            }
        }
        
        return false;
        
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
          cout<<"/n";
        }
        
    }
};

int main()
{
   int grid[N][N];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>grid[i][j];
        }
    }
    
    Solution obj;
    
    if(obj.SolveSudoku(grid)==true)
    {
        printSudoku(grid);
    }
    else{
      cout<<"No solution Exists";
    }
    return 0;
}
