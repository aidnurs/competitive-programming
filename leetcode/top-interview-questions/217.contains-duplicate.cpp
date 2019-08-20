class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2){
            return false;
        }
        int k=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
            }
        }
        return (k+1)==nums.size()?false:true;
    }
};
