class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mp;

        for(int i = 0; i < n; i++){
            mp[arr[i]]++;

            if(mp[arr[i]] > n/2){
                return arr[i];
            }
        }

        return -1;
    }
};