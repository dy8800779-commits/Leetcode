class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>arr3(n+m);
        for(int i=0; i<n; i++){
            arr3[i]=nums1[i];
    }
    for(int i=0; i<m; i++){
        arr3[n+i]=nums2[i];
    }
    sort(arr3.begin(), arr3.end());
    int total = n + m;
        double result;
        if (total % 2 == 0) {
            result = ((double)arr3[total/2-1]+ arr3[total/2]) / 2;
        } else {
            result = arr3[total/2];
        }
        return result;
    }
};

        