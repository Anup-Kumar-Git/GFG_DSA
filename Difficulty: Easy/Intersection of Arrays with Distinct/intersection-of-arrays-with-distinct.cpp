class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        int count=0;
        map<int,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            if(mp[b[i]] >=1){
                count++;
                mp[b[i]]--;
            }
        }
        return count;
    }
};