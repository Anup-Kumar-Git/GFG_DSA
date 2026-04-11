// User function Template for C++

class Solution {
  public:
    string arrayGame(int N, int A[]) {
        // code here
        int maximum=A[0];
        for(int i=1;i<N;i++){
             if (A[i] > maximum) {
                maximum = A[i];
            }
        }
        int moves=0;
        for(int i=0;i<N;i++){
            moves+=(maximum-A[i]);
        }
        
        if(moves==0)return "Draw";
        if(moves%2==1)return "First";
        else{
            return "Second";
        }
        
    }
};