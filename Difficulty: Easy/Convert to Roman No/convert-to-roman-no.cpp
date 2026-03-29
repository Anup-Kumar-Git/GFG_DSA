class Solution {
public:
    string convertToRoman(int n) {
        vector<int>value = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>symbol = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string result = "";
        
        for(int i=0;i<value.size();i++){
            while(n>=value[i]){
                result+=symbol[i];
                n-=value[i];
                
            }
        }
        
        return result;
    }
};