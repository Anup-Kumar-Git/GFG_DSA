// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& mat) {
        // Code here
        
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            sum+=mat[i][mat.size()-1-i];
            
        }
        return sum;
    }
};


