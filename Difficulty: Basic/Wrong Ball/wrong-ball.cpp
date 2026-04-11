int countWrongPlacedBalls(string s) {
    // code here.
    int count=0;
    for(int i=0;i<s.length();i++){
        if(i%2!=0 && s[i]=='R'){
            count++;
        }else if(i%2==0 && s[i]=='B'){
            count++;
        }
    }
    return count;
}
