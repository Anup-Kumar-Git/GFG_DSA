class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>prefix1(n,0);
        vector<int>sufix0(n,0);
        
        prefix1[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix1[i]=prefix1[i-1]+(arr[i]==1);
        }
        
        sufix0[n-1]=(arr[n-1]==0);
        for(int i=n-2;i>=0;i--){
            sufix0[i]=sufix0[i+1]+(arr[i]==0);
        }
        
        int ans=INT_MAX;
        for (int i = 0; i <= n; i++) {
            int leftOnes = (i == 0) ? 0 : prefix1[i - 1];
            int rightZeros = (i == n) ? 0 : sufix0[i];

            ans = min(ans, leftOnes + rightZeros);
        }
        return ans;
        
    }
};