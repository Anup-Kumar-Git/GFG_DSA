string solve(string a) {
    // code here
    set<char>st;
    for(int i=0;i<a.length();i++){
        if(a[i]!='a'&& a[i]!='e'&& a[i]!='i'&& a[i]!='o'&& a[i]!='u'){
            st.insert(a[i]);
        }
    }
    if(st.size()%2==0) return "SHE!";
    return "HE!";
}