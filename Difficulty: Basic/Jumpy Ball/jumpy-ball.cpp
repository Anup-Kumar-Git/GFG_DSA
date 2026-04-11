// User function Template for C++
class Solution {
  public:
    long long jumpyBall(long long N) {
        // Write Your Code here
        long long sum=0;
        while(N>0){
            sum+=(N*2);
            N=N/2;
            
        }
        return sum;
    }
};