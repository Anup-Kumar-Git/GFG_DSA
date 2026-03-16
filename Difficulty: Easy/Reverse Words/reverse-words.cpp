class Solution {
  public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0, j = 0;

        // Step 1: remove extra dots
        while(i < n){
            while(i < n && s[i] == '.') i++;   // skip dots
            if(i >= n) break;

            if(j > 0) s[j++] = '.';

            while(i < n && s[i] != '.')
                s[j++] = s[i++];
        }

        s.resize(j);

        // Step 2: reverse whole string
        reverse(s.begin(), s.end());

        // Step 3: reverse each word
        int start = 0;
        for(int k = 0; k <= s.size(); k++){
            if(k == s.size() || s[k] == '.'){
                reverse(s.begin() + start, s.begin() + k);
                start = k + 1;
            }
        }

        return s;
    }
};