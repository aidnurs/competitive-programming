class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]*nums[1]*nums[nums.size()-1]>=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]){
            return nums[0]*nums[1]*nums[nums.size()-1];
        }
        return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
    }
};
