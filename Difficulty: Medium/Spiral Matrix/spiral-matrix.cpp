class Solution {

  public:
    int findK(vector<vector<int>> &a, int n, int m, int k) {
        // Your code goes here
        int srow=0;
        int erow=n-1;
        int scol=0;
        int ecol=m-1;
        vector<int>ans;
        while(srow<=erow && scol<=ecol){
            
            //top
            for(int i=scol;i<=ecol;i++){
                ans.push_back(a[srow][i]);
            }
            
            //right
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(a[i][ecol]);
            }
            
            //bottom
           if(srow < erow){
                for(int i=ecol-1;i>=scol;i--){
                    ans.push_back(a[erow][i]);
                }
            }
            

            //left
            if(scol < ecol){
                for(int i=erow-1;i>=srow+1;i--){
                    ans.push_back(a[i][scol]);
                }
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans[k-1];
        
    }
};