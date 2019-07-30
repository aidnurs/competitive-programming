class Solution {
public:
    bool isSelfDividing(int number){
        vector<int> digits;
        string str=to_string(number);
        char c;
        for(int i=0;i<str.length();i++){
            c=str[i];
            if(c=='0'){
                return false;
            }
            digits.push_back((int)c-'0');
        }
        for(int i=0;i<digits.size();i++){
            if(number%digits[i]!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(i%10!=0){
                if(isSelfDividing(i)){
                    v.push_back(i);
                }
            }
        }
        return v;
    }
};
