class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        
        int count = 0;
        
        for(int i = A; i <= B; i++){
            bool found = false;
            
            for(int j = 0; j < n; j++){
                if(arr[j] == i){
                    found = true;
                    break;
                }
            }
            
            if(!found)
                return false;
        }
        
        return true;
        
            
        
    }
};
