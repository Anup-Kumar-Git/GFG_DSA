class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        
        int totalSum = 0;
        for(int x : arr)
            totalSum += x;
            
        int leftSum = 0;
        
        for(int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - arr[i];
            
            if(leftSum == rightSum)
                return i;
                
            leftSum += arr[i];
        }
        
        return -1;
    }
};