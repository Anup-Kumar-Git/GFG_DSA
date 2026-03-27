class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(const auto & pair:mp){
            if(pair.second < k){
                return pair.first;
            }
        }
        return -1;
    }
};