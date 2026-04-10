class Solution {
  public:
    // Complete this function
    void getPermutation(string s,int index,vector<string>& ans){
        if(index==s.length()){
            ans.push_back(s);
            return;
        };
        for(int i=index;i<s.length();i++){
            swap(s[index],s[i]);
            getPermutation(s,index+1,ans);
            swap(s[index],s[i]);
        }
    }
    

    vector<string> permutation(string S) {
        // Your code here
        vector<string>ans;
        getPermutation(S,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};