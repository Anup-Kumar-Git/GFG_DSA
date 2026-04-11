#include <cmath>  // for ceil

class Solution {
  public:
    int Average(vector<int> run, vector<string> status) {
        int sum = 0;
        int count = 0;

        for (int i = 0; i < run.size(); i++) {
            sum += run[i];  

            if (status[i] == "out") {
                count++;    
            }
        }

        if (count == 0) return -1;  

        return ceil((double)sum / count); 
    }
};