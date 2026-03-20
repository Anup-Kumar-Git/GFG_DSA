class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        long long sum=0;
        int mod=1000000007;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            long long mul=(1LL*arr[i]*i)%mod;
            sum=(sum+mul)%mod;
           
        }
        return sum ;
    }
};