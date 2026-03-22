class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        

        sort(arr1.begin(),arr1.end());
        vector<int>ans={arr1[0]};
        for(int i=1;i<arr1.size();i++){
            if(arr1[i]!=arr1[i-1]){
                ans.push_back(arr1[i]);
                
            }
        }return ans;
    }
};