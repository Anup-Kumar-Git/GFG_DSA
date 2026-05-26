// Function to count the number of walls that need to be reduced.
class Solution {
  public:
    int reducingWalls(vector<int>& arr, int k) {
        // your code
        int count=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                
                count+=(arr[i]-1)/k;
            }
        }
        return count;
    }
};