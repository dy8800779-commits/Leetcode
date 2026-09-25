class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        multimap<int,int>mp;
        for(int i=0; i<n; i++){
            int x=arr[i];
            int setbits = __builtin_popcount(x);
            mp.insert({setbits, x});
        }
        vector<int>ans;
        for(auto i:mp) ans.push_back(i.second);
        return ans;
    }
};