class Solution {
  public:
    long long factorSum(int n) {
        // Your code goes here
        long long sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(i!=n/i){
                    sum+=n/i;
                }
                
            }
        }return sum;
    }
};