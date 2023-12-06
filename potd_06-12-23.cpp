// Given two integers L, R, and digit X. Find the number of occurrences of X in all the numbers in the range (L, R) excluding L and R.


int countX(int L, int R, int X) {
        // code here
        int ans=0;
        for(int i= L+1;i<R;i++){
            int N = i;
            while(N!=0){
                int digit = N%10;
                N/=10;
                if(digit==X) ans++;
            }
            
        }
        return ans;
    }
