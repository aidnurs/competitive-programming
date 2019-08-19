class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>0){
            nums.insert(nums.begin(),nums[nums.size()-1]);
            nums.pop_back();
            k--;
        }
    }
};
