

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size()-1;
        int res=0;
        vector<int>ans;
        for(int i=n;i>=0;i--){
            if(arr[i]>=res){
                res=arr[i];
                ans.push_back(res);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};