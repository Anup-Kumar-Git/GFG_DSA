class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int m=mat.size();
        int n=mat[0].size();
        int stRow=0;
        int endRow=m-1;
        while(stRow <= endRow){
            int midRow=stRow + (endRow-stRow)/2;
            if(x>=mat[midRow][0] && x<=mat[midRow][n-1]){
                int st=0;
                int end=n-1;
                while(st<=end){
                    int mid=st+(end-st)/2;
                    if(x==mat[midRow][mid]){
                        return true;
                    }else if(x<mat[midRow][mid]){
                        end=mid-1;
                    }else{
                        st=mid+1;
                    }
                }
                return false;
                
            }else if(x > mat[midRow][n-1]){
                stRow=midRow+1;
            }else{
                endRow=midRow-1;
            }
        }
        return false;
    }
};