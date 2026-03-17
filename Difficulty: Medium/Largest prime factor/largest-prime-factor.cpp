class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int ans=2;
        while(n%2==0){
            n/=2;
        }
        for(int i=3;i<=n;i+=2){
            while(n%i==0){
                n=n/i;
                ans=i;
            }
        }return ans;
    }
};