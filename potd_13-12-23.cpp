// Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer modulo 109 + 7.

// DP SOLUTION -->>

ll countStrings(int n) {
	    // code here
	    ll mod = 1e9 + 7;
	    ll count = 0;
	    vector<ll> dp(n+1,0);
	    dp[1] = 2;
	    dp[2] = 3;
	    // dp[3] = 5;
	    // dp[4] = 8;
	    for(int i=3;i<=n;i++)
	    {
	        dp[i] = (dp[i-1] + dp[i-2])%mod;
	    }
	    
	    return dp[n]%mod;
	}






// OPTIMIZED SOLUTION -->>

	ll countStrings(int n) {
	    // code here
	    ll mod = 1e9 + 7;
	    ll  zeroending=1;
        ll  oneending=1;
        ll  sum=zeroending+oneending;
        
        if(n==1) return sum;
	
	    for(int i=2;i<=n;i++)
	    {
	        oneending  = zeroending;
	        zeroending = sum;
	        sum = (oneending+zeroending)%mod;
	    }
	    return sum%mod;
	}
