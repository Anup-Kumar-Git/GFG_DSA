class Solution {
  public:
    int calculateFriendliness(vector<int>& arr) {
        // code here
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ans += abs(arr[i] - arr[(i + 1) % n]);
        }return ans;
    }
};
