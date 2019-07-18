class Solution {
public:
    string toLowerCase(string str) {
        char c;
        for (int i = 0; i <str.length(); i++) {
          c=str[i];
          if (c>='A'&&c<='Z') {
            str[i]=c+32;
          }
        }
        return str;
    }
};
