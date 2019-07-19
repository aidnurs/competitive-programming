class Solution {
public:
    string removeOuterParentheses(string S) {
        string newstr="";
        char c,next_c;
        std::vector<int> v;
        for (int i = 0; i < S.length()-1; i++) {
          c=S[i];
          next_c=S[i+1];
          if(int(c)=='('&&c==next_c){
            v.push_back(i);
          }else if(int(c)==')'&&c==next_c){
            v.push_back(i+1);
          }
        }
        for (int i = 0; i < S.length(); i++) {
          for (int j = 0; j <v.size(); j++) {
            if (i==v[j]) {
              break;
            }
            if (j==(v.size()-1)) {
              newstr.push_back(S[i]);
            }
          }

        }
        return newstr;
    }
};
