class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){

            }else{
                if(j!=i){
                    nums[j]=nums[i];
                    nums[i]=0;
                }
                j++;
            }
        }
    }
};
