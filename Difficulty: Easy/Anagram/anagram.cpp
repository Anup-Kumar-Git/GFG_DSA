class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size() != s2.size()) return false;
        map<char,int>mp; //declare map to store char and freq of string s1
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
            mp[s2[i]]--;
        }
        for(auto it:mp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
        
        
        
//-----------------------------------------------------------------------------------------        
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        // if(s1!=s2){
        //     return false;
        // }return true;
    }
    
};