
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int st=0;
        int end=arr.size()-1;
        int ans=0;
        while(st<end){
            if(arr[st]!=arr[end]){
                return false;
                break;
                
            }
                st++;
                end--;
            
        }return true;
    }
};
