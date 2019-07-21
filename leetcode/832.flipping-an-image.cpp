class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> v;
        vector<int> small;
        for(int i=0;i<A.size();i++){
            for(int j=A[i].size()-1;j>=0;j--){
                small.push_back(abs(A[i][j]-1));
            }
            v.push_back(small);
            small.clear();
        }

        return v;
    }
};
