class Solution {
  public:
    bool isIdentical(vector<int> &a, vector<int> &b) {
        // code here
        map<int,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            mp[b[i]]--;
            
        }
        for(auto it :mp){
            if(it.second !=0){
                return false;
            }
        }
        return true;
    }
};