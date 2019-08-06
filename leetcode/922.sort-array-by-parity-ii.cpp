class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int tmp = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] % 2 != i % 2) {
                tmp=A[i];
                A.erase(A.begin()+i);
                A.push_back(tmp);
                i--;
            }
        }
        return A;
    }
};
