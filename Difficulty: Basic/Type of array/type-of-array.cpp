class Solution {
public:
    int maxNtype(vector<int>& arr) {
        int n = arr.size();
        int incBreak = 0, decBreak = 0;

        // check normal breaks (ignore circular first)
        for(int i = 1; i < n; i++) {
            if(arr[i] < arr[i-1]) incBreak++;
            if(arr[i] > arr[i-1]) decBreak++;
        }

        // ✅ FIRST handle pure cases
        if(incBreak == 0) return 1; // ascending
        if(decBreak == 0) return 2; // descending

        // THEN check circular
        if(arr[0] < arr[n-1]) incBreak++;
        if(arr[0] > arr[n-1]) decBreak++;

        if(decBreak == 1) return 3; // descending rotated
        return 4;                  // ascending rotated
    }
};