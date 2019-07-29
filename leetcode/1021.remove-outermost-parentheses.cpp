class Solution {
public:
    string removeOuterParentheses(string S) {
        char c;
        int counter=0;
        string str="";
        for(int i=0;i<S.length();i++){
            c=S[i];
            if(c=='('&&counter++>0){
                str.push_back(c);
            }
            if(c==')'&&counter-->1){
                str.push_back(c);
            }
        }
        return str;
    }
};
