class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }

    string Sandwiched_Vowel(string &s) {
        int n = s.length();
        int j = 0; // write pointer

        for(int i = 0; i < n; i++) {
            if(i > 0 && i < n-1 &&
               isVowel(s[i]) &&
               isalpha(s[i-1]) && !isVowel(s[i-1]) &&
               isalpha(s[i+1]) && !isVowel(s[i+1])) {
                continue; // skip this character
            }
            s[j++] = s[i]; // keep character
        }

        s.resize(j); // remove extra part
        return s;
    }
};