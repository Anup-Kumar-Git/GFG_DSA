class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            sum=max(sum,arr[i]);
            ans=max(ans,sum);
        }return ans;
    }
};