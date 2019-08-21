class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j=digits.size()-1;
        do {
            if (++digits[j]==10) {
                digits[j]=0;
            }
            if (j==0&&digits[j]==0) {
                digits.insert(digits.begin(),1);
            }
            j--;
        } while(digits[j+1]==0);
        return digits;
    }
};
