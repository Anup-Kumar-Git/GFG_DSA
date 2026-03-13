class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        int st=0;
        vector<bool>isPrime(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        vector<int>ans;
        for(int i=2;i<=n;i++){
            if(isPrime[i]){
                ans.push_back(i);
            }
        }return ans;
    }
};