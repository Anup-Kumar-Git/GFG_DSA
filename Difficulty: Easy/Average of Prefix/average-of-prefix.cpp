// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int avg=sum/(i+1);
            ans.push_back(avg);
            
        }
        return ans;
    }
};