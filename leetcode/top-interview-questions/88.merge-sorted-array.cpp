class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        int i=m;
        while(j<n){
            nums1[i]=nums2[j];
            j++;
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
