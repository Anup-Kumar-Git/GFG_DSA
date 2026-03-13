// class Solution {
//   public:
//     void pushZerosToEnd(vector<int>& arr) {
//         // code here
//         int j=0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]!=0){
//                 swap(arr[i],arr[j]);
//                 j++;
                
//             }
//         }
//     }
// };

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        vector<int> temp;
        
        // store positive elements
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > 0){
                temp.push_back(arr[i]);
            }
        }
        
        
        // store zero
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                temp.push_back(arr[i]);
            }
        }
        
        // // copy back to original array
        // for(int i = 0; i < arr.size(); i++){
        //     arr[i] = temp[i];
        // }
        arr=temp;
    }
};