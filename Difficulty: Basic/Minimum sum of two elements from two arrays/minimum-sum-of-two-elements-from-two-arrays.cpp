class Solution {
  public:
    int minSum(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int min1=INT_MAX,min2=INT_MAX;
        int sec1=INT_MAX,sec2=INT_MAX;
        int idx1=-1,idx2=-1;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]<min1){
                sec1=min1;
                min1=arr1[i];
                idx1=i;
            }
            else if(arr1[i]<sec1){
                sec1=arr1[i];
            }
        }
        
        for(int i=0;i<arr2.size();i++){
            if(arr2[i]<min2){
                sec2=min2;
                min2=arr2[i];
                idx2=i;
            }
            else if(arr2[i]<sec2){
                sec2=arr2[i];
            }
        }
        if(idx1 !=idx2){
            return min1 + min2;
        }
        return min(sec1+min2 ,sec2+min1);
    }
};
