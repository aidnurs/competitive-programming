class Solution {
public:
    int reverse(int x) {
        int result=0;
        bool sign=false;
        std::vector<int> v;

        if (x<0) {
            sign=true;
            if(x<INT_MIN){
                return 0;
            }
            if(x*-1<INT_MAX){
                x*=-1;
            }
        }
        while (x>0) {
            v.push_back(x%10);
            x/=10;
        }
        if(v.size()>32){
            return 0;
        }
        for (int j = 0; j < v.size(); j++) {
            if((unsigned int)result+v[j]*pow(10,v.size()-j-1)>INT_MAX){
                return 0;
            }
            result+=v[j]*pow(10,v.size()-j-1);
        }
        if (sign) {
            result*=-1;
        }
        return result;
    }
};
