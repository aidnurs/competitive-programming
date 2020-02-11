class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mymap;
        for(int i=0;i<nums.size();i++){
            if(mymap.find(nums[i])!=mymap.end()){
                mymap[nums[i]]++;
                if(mymap[nums[i]]>(nums.size()/2)){
                    return nums[i];
                }
            }else{
                mymap.insert(pair<int,int>(nums[i],1));
            }
        }
        return nums[0];
    }
};