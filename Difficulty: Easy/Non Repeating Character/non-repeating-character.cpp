class Solution {
  public:
    char nonRepeatingChar(string &s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
};


// class Solution {
//   public:
//     char nonRepeatingChar(string &s) {
        
//         int freq[26] = {0};
        
//         // count frequency
//         for(int i = 0; i < s.size(); i++){
//             freq[s[i] - 'a']++;
//         }
        
//         // find first non repeating
//         for(int i = 0; i < s.size(); i++){
//             if(freq[s[i] - 'a'] == 1){
//                 return s[i];
//             }
//         }
        
//         return '$';
//     }
// };



