class Solution {
  public:

    void countOddEven(vector<int>& arr) {
        // code here
        int n=arr.size();
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        cout<<odd<<" "<<even<<endl;;
    }
};