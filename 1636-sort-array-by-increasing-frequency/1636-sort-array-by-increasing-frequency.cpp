class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       int n=nums.size();
       
        map<int,int>mp;
        for(int i=0; i<n; i++){
        int element = nums[i];
        mp[element]++;
       }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] != mp[b]) {
                return mp[a] < mp[b];
            }
            return a > b;
        });

        return nums;
    }
};