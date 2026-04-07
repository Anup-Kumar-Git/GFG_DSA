class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        vector<int> ans(n);

        if(n >= 1) ans[0] = 0;
        if(n >= 2) ans[1] = 1;

        for(int i = 2; i < n; i++){
            ans[i] = ans[i-1] + ans[i-2];
        }

        return ans;
    }
};