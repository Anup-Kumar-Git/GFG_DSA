class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1;
        long long ans;
        long long result=n*(n+1)/2;
        long long sum=0;
        
        for(int i=0;i<arr.size();i++){
            sum +=arr[i];
            
        }
        ans=result-sum;
        return ans;
    }
};