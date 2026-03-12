// User function Template for C++

class Solution {
  public:
    int findDuplicate(const vector<int>& arr, int k) {
        // code here
        map<int,int>mp;
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==k){
                ans=min(ans,arr[i]);
                
            }
        }if(ans == INT_MAX) return -1;
        return ans;
    }
};