class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> v;
        int i=0,j=0;

        while(A[j]<0){
            j++;
        }
        if(j!=0){
            i=j-1;
        }

        while(i>=0&&j<A.size()){
            if(A[j]*A[j]>A[i]*A[i]){
                v.push_back(A[i]*A[i]);
                i--;
            }else{
                v.push_back(A[j]*A[j]);
                j++;
            }
        }

        while(i>=0){
            v.push_back(A[i]*A[i]);
            i--;
        }
        while(j<A.size()){
            v.push_back(A[j]*A[j]);
            j++;
        }
        return v;
    }
};
