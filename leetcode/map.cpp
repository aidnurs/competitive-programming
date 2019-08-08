class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> map;
        std::vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(target-nums[i])!=map.end()) {
                v.push_back(map[target-nums[i]]);
                v.push_back(i);
                break;
            }
            map.insert(std::pair<int,int>(nums[i],i));
        }
        return v;
    }
};
