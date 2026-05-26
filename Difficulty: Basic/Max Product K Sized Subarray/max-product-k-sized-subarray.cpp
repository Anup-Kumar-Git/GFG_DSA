class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        long long product=1;
        for(int i=0;i<k;i++){
            product *=arr[i];
        }
        
        long long maxi=product;
        for(int i=k;i<n;i++){
            product=product/arr[i-k];
            product=product*arr[i];
            maxi=max(product,maxi);
        }
        return maxi;
        
    }
};