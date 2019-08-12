class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        std::map<char,int> map;
        std::vector<string> v;
        std::map<char,int>::iterator it = map.begin();

        for (int i = 0; i < A[0].length(); i++) {
            if (map.find(A[0][i])==map.end()) {
                map.insert(std::pair<char,int>(A[0][i],1));
            }
        }


        for (int i = 0; i < A[1].length(); i++) {
            if (map.find(A[1][i])!=map.end()) {
                map[A[1][i]]++;
            }
        }

        for (int i = 0; i < A[2].length(); i++) {
            if (map.find(A[2][i])!=map.end()) {
                map[A[2][i]]++;
                //std::cout << A[1][i]<<"   "<< i << "    "<< map[A[1][i]]<< '\n';
            }
        }

        for (it=map.begin(); it!=map.end(); ++it){
            if (it->second>2) {
                v.push_back(string(1,it->first));
            }
        }
        return v;
    }
};
