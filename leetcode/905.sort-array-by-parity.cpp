class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> v;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){
                v.insert(v.begin(),A[i]);
            }else{
                v.push_back(A[i]);
            }
        }
        return v;
    }
};
