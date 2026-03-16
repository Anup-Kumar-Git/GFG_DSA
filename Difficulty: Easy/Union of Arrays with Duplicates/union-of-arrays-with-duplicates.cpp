class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        vector<int>un;
        un.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            if(a[i]!=a[i-1]){
                un.push_back(a[i]);
            }
        }return un;
    }
};