// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        // code here
        int limit=min(M,N);
        
        for(int i=0;i<limit;i++){
            
            int row=0;
            int col=0;
            for(int j=0;j<M;j++){
                row+=A[i][j];
            }
            for(int j=0;j<N;j++){
                col+=A[j][i];
            }
            if(row!=col){
                return 0;
            }
        }
        return 1;
    }
    
};