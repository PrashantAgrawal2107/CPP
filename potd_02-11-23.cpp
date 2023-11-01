// You are given an array a, of n elements. Find the minimum index based distance between two distinct elements of the array, x and y. Return -1, if either x or y does not exist in the array.

 int minDist(int a[], int n, int x, int y) {
        int xi=-1,yi=-1;
        int ans= n;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                if(yi!=-1){
                   ans= min(ans,abs(yi-i));     
                }
                xi=i;
            }
            if(a[i]==y){
                if(xi!=-1){
                    ans=min(ans,abs(xi-i));
                }
                yi=i;
            }
            
        }
        if(ans==n) return -1;
        return ans;
    }
