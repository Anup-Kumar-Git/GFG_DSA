class Solution {
  public:
    bool wifiRange(string &s, int x) {
        // code here
        
        int n=s.length();
        int last = -1;
        
        for(int i=0; i<n; i++){
            
            // Find router
            if(s[i]=='1'){
                last = i;
            }
            
            // If current room not covered by left router
            if(last==-1 || i-last>x){
                
                bool found = false;
                
                // Check right side routers
                for(int j=i; j<=min(n-1,i+x); j++){
                    
                    if(s[j]=='1'){
                        found = true;
                        break;
                    }
                }
                
                if(!found){
                    return false;
                }
            }
        }
        
        return true;
    }
};