class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maximum=0;
        for(int i=0;i<arr.size();i++){
            maximum=max(maximum,arr[i]);
        }return maximum;
        
    }
};
