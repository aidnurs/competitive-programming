class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length();

        while (i<j) {
            if (isalnum(s[i])) {
                if (isalnum(s[j])) {
                    if (tolower(s[i])==tolower(s[j])) {
                        i++;
                        j--;
                    }else{
                        return false;
                    }
                }else{
                    j--;
                }
            }else{
                i++;
            }
        }

        return true;
    }
};
