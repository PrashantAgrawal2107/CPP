// Given an integer, check whether it is Bleak or not.
// A number n is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x, i.e., x + countSetBits(x) is not equal to n for any non-negative number x.


	int is_bleak(int n)
	{
	    // Code here.
	   if(n<32){
	      for(int i=1;i<n;i++){
	          int countSetBits= __builtin_popcount(i);
	          if((i+countSetBits)==n) return false;
	      }
	    }
	    
	    else{
	         for(int i=n-32;i<n;i++){
	            int countSetBits= __builtin_popcount(i);
	            if((i+countSetBits)==n) return false;
	       }
	    }
	    
	    return true;
	}
