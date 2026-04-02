// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int frist=arr[i];
            int sec=target-frist;
            if(mp.find(sec) != mp.end()){
                ans.push_back(arr[i]);
                ans.push_back(arr[mp[sec]]);
                break;
            }
            mp[frist]=i;
        }return ans;
    }
};