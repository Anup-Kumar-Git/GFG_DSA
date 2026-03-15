/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        
        int result = 0;
        int curr = 1;
        if(n==0) return n+=5;
        while(n > 0){
            int digit = n % 10;
            if(digit == 0){
                digit = 5;
            }    
            result = result + digit * curr;
            curr = curr * 10;
            n = n / 10;
        }    
        return result;
    }
};