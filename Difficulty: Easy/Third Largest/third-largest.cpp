class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if (n < 3) return -1;  // not enough elements
        long f=LONG_MIN;
        long s=LONG_MIN;
        long t=LONG_MIN;
        for(int i=0;i<n;i++){
            int x=arr[i];
            
            if(x > f){
                t=s;
                s=f;
                f=x;
            }else if(x > s){
                t=s;
                s=x;
            }else if(x > t){
                t=x;
            }
        }
        return t;
    }
};