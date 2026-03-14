class Solution {
public:
    string convertToRoman(int n) {
        int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string result = "";
        
        for(int i = 0; i < 13; i++) {
            while(n >= value[i]) {
                result += symbol[i];
                n -= value[i];
            }
        }
        
        return result;
    }
};