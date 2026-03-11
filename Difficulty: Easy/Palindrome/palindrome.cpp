class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        if(n<=0){
            return false;
        }
        int original=n;
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=rev*10 + digit;
            n/=10;
        }
        if(rev!=original){
            return false;
        }else{
            return true;
        }
    }
};