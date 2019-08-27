class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        for (size_t i = 0; i < prices.size(); i++) {
            for (size_t j = i+1; j < prices.size(); j++) {
                if (prices[j]-prices[i]>diff) {
                    diff=prices[j]-prices[i];
                }
            }
        }
        return diff;
    }
};
