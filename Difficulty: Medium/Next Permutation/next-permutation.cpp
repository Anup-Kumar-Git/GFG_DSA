class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int pivot=-1;
        int n=arr.size();
        //find the pivot---------------------------
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        //next larger element to pivot-------------------
        for(int i=n-1;i>pivot;i--){
            if(arr[i]>arr[pivot]){
                swap(arr[i],arr[pivot]);
                break;
            }
        }
        //if element affter pivot in increasing order then next larger 
        int i=pivot+1;
        int j=n-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
};