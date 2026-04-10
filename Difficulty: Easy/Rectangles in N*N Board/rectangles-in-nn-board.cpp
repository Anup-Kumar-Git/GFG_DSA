
class Solution {
  public:
    long long rectanglesInChessBoard(long long N) {
        // code here
        long long rect= (N * (N + 1) ) / 2;
        long long totalRec=rect*rect;
        long long totalSqr=(N * (N + 1) * (2 * N + 1)) / 6;
        return totalRec-totalSqr;
    }
};