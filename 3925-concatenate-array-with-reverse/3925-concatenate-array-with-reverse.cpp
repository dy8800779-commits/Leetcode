/*
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int  n=nums.size();
        vector<int>ans(2 * n);
        for(int i=0; i<n; i++){
            ans[i]=nums[i];
            ans[i+n]=nums[n-i-1];
        }
        return ans;
    }
};

*/
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.rbegin(), nums.rend());
        return ans;
    }
};