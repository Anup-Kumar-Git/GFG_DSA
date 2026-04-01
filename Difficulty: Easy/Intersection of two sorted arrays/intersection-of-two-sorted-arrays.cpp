class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            if(mp[arr2[i]]>=1){
                ans.push_back(arr2[i]);
                mp[arr2[i]]=0;
            }
        }
        return ans;
    }
};