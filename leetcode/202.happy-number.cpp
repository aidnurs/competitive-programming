class Solution {
public:
    int helper(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast=n;
        int slow=n;
        do{
            slow=helper(slow);
            fast=helper(fast);
            fast=helper(fast);
            if(fast==1){
                return true;
            }
        }while(slow!=fast);
        return false;
    }
};