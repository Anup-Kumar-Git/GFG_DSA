class Solution {
  public:
    vector<int> primeFac(int n) {
        // code here
        vector<int> result;

        // Step 1: Handle 2 separately
        if (n % 2 == 0) {
            result.push_back(2);
            while (n % 2 == 0) {
                n /= 2;
            }
        }

        // Step 2: Check odd numbers
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                result.push_back(i);
                while (n % i == 0) {
                    n /= i;
                }
            }
        }
        if(n>1){
            result.push_back(n);
        }    
        return result;
    }
};