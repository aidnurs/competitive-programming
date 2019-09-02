class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int c=1;
        int min_length=INT_MAX;
        string s="";
        if(strs.size()==0){
            return "";
        }
        for (size_t i = 0; i < strs.size(); i++) {
            if (strs[i].size()<min_length) {
                min_length=strs[i].size();
            }
        }
        for(int i=0;i<min_length;i++){
            for(int j=1;j<strs.size();j++){
                if (strs[j][i]==strs[0][i]) {
                    c++;
                }
            }
            if (c==strs.size()) {
                s.push_back(strs[0][i]);
            }else{
                break;
            }
            c=1;
        }
        return s;
    }
};
