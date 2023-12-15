// There are N points on the road, you can step ahead by 1 or 2 .
// If you start from a point 0, and can only move from point i to point i+1 after taking a step of length one, find the number of ways you can reach at point N. 


	int nthPoint(int n){
		    // Code here
		    int mod = 1000000007;
		    int dp[n+1];
		    dp[1] = 1;
		    dp[2] = 2;
		    for(int i=3;i<=n;i++){
		        dp[i] = (dp[i-1]%mod + dp[i-2]%mod)%mod;
		    }
		    return dp[n]%mod;
		}

// It is just a simple problem similar to Fibonacci series. I have solved this using Tabulation DP method. You can also solve it using Memoization.
