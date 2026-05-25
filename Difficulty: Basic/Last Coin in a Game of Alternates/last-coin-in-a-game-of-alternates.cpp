class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        while(arr.size()>1){
            if(arr.front() >= arr.back()){
                arr.erase(arr.begin());
            }
            else {
                arr.pop_back();
            }
        }
        return arr[0];
    }
};