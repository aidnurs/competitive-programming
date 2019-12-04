class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mymap;
        std::vector<int> v;
        for(int i=0;i<nums1.size();i++){
           mymap[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
           if(mymap[nums2[i]]>0){
               v.push_back(nums2[i]);
               mymap[nums2[i]]--;
           }
        }
        return v;
    }
};
