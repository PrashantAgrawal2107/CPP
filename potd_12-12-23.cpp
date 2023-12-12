// Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons.
// Initially the miner can start from any row in the first column. From a given cell, the miner can move - 

// 1. to the cell diagonally up towards the right 
// 2. to the right
// 3. to the cell diagonally down towards the right

// Find out maximum amount of gold which he can collect until he can no longer move.


 int maxGold(int n, int m, vector<vector<int>> M)
    {
       // Condition when there is only one row
        if(n==1){
            int ans=0;
            for(int i=0;i<m;i++){
                ans+=M[0][i];
            }
            return ans;
        }
        // Condition when there is only one column 
        if(m==1){
            int ans = 0;
            for(int i=0;i<n;i++){
                ans=max(M[i][0],ans);
            }
            return ans;
        }
        
        
        for(int j=1 ;j<m ;j++){
           int i=0;
           M[i][j] += max(M[i][j-1] , M[i+1][j-1]);
            i++;
             for(i;i<n-1;i++){
                      
                  M[i][j] += max(M[i][j-1] , max(M[i-1][j-1], M[i+1][j-1]));
                 }     
            
            if((i-1)>=0) M[i][j] += max(M[i][j-1] , M[i-1][j-1]);
            else M[i][j] += M[i][j-1];
        }
        
        int ans = M[0][m-1];
        
        for(int i=1;i<n;i++){
            ans = max(ans, M[i][m-1]);
        }
        
        return ans;
    }
