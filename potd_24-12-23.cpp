// In a stock market, there is a product with its infinite stocks. The stock prices are given for N days, where price[i] denotes the price of the stock on the ith day.
// There is a rule that a customer can buy at most i stock on the ith day.
// If the customer has an amount of k amount of money initially. The task is to find out the maximum number of stocks a customer can buy. 


int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        int ans=0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({price[i],i+1});
        }
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++){
            int num = v[i].second;
            if(k>(num*v[i].first)){
                k-=num*v[i].first;
                ans+=num;
            }
            else{
                ans+=(k/v[i].first);
                return ans;
            }
        }
        return ans;
        
    }
