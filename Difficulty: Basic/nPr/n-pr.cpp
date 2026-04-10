// User function Template for C++

class Solution {
  public:
    long long nPr(int n, int r) {
        // code here
        long long mul=1;
        for(int i=1;i<=n;i++){
            mul=mul*i;
        }
        long long rem=1;
        for(int i=1;i<=(n-r);i++){
            rem=rem*i;
        }
        long long ans=mul/rem;
        return ans;
    }
};