class Solution {
  public:
    
    bool isPerfectSquare(long long x) {
        long long s = sqrt(x);
        return (s * s == x);
    }
    
    bool isFibo(long long n) {
        return isPerfectSquare(5*n*n + 4) || 
               isPerfectSquare(5*n*n - 4);
    }
    
    int countFibonacciNumbers(vector<long long>& arr) {

        int count = 0;
        for (long long x : arr) {
            if (isFibo(x) == 1) {
                count++;
            }
        }


        return count;
        
    }
};
