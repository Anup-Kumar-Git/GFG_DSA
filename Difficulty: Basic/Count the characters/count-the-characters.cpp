
class Solution {
  public:
    int getCount(string s, int N) {
        // code here.
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(i==0 || s[i]!=s[i-1]){
                mp[s[i]]++;
            }
        }
        int count=0;
        for(auto it:mp){
            if(it.second==N){
                count++;
            }
        }
        return count;
    }
};