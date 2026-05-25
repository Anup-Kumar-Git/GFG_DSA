class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
         for(int i = start; i <= end; i++) {
            
            bool found = false;
            
            // Search current number in array
            for(int j = 0; j < arr.size(); j++) {
                if(arr[j] == i) {
                    found = true;
                    break;
                }
            }
            
            // If any number is missing
            if(!found)
                return false;
        }
        return true;
    }
};
