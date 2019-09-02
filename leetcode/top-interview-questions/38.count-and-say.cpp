class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        string t="";
        int c=0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < s.length(); j++) {
                if (s[j]!=s[j+1]) {
                    t.append(to_string(c+1));
                    t.push_back(s[j]);
                    c=0;
                }else{
                    c++;
                }
            }
            s=t;
            t="";
        }
        return s;
    }
};
