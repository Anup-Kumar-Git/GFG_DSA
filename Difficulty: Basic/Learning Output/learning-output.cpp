
class Solution {
  public:
    void Learning(int a[], int n, float &pos, float &neg, float &zero) {
        // Your code goes here
        for(int i=0;i<n;i++){
            if(a[i]>0){
                pos++;
            }else if(a[i]<0){
                neg++;
            }else{
                zero++;
            }
        }
        pos=n/pos;
        neg=n/neg;
        zero=n/zero;
        
    }
};