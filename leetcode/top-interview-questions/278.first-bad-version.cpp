// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        int j=n;
        while(i<j){
            int k=i+(j-i)/2;
            if(isBadVersion(k)){
                j=k;
            }else{
                i=k+1;
            }
        }
        return i;
    }
};
