class Solution {
public:
    int myAtoi(string str) {
        int i=0;
        while(str[i]==32){
            i++;
        }
        bool negative=false;
        if(str[i]=='-'){
            negative=true;
            i++;
        }else if(str[i]=='+'){
            i++;
        }
        int c=0;
        while (str[i]>=48&&str[i]<=57) {
            if (c>(INT_MAX-(str[i]-48))/10) {
                c=INT_MAX;
                if(negative){
                    c*=-1;
                    c--;
                    negative=false;
                }
                break;
            }
            c=c*10+(str[i]-48);
            i++;
        }
        if (negative) {
            c*=-1;
        }
        return c;
    }
};
