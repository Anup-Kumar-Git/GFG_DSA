class Solution {
  public:
  bool valid(int n) {

    while (n >= 10) {

        int d1 = n % 10;          // last digit
        int d2 = (n / 10) % 10;  // previous digit

        if (abs(d1 - d2) != 1)
            return false;

        n = n / 10;
    }

    return true;
    }
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<k && arr[i]>=10 && valid(arr[i])){
                ans.push_back(arr[i]);
            }
        }
        return ans;
        
    }
};