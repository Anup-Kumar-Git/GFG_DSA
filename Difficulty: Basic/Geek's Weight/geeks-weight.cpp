class Solution {
  public:
    long long int total_Money(int N, int K) {
        long long m = N / K; //how many day he will earn money.
        long long p= m * (m + 1) / 2; //receive money in order of m,2m,3m,4m,...nm.
        long long total=K*p;
        
        return total;
    }
};
