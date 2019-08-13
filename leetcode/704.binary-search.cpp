class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int middle=0;

        while(left<=right) {
            middle=(right+left)/2;

            if (target==nums[middle]) {
                return middle;
            }else{
                if (target>nums[middle]) {
                    left=middle+1;
                }else{
                    right=middle-1;
                }
            }
        }
        return -1;
    }
};
