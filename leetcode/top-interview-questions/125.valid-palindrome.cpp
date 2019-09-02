class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        if(s.length()==0){
            return true;
        }else if(s.length()==2){
            return isalnum(s[0])&&isalnum(s[1])?tolower(s[i])==tolower(s[j]):true;
        }

        while (i<j) {
            if (isalnum(s[i])) {
                if (isalnum(s[j])) {
                    if (tolower(s[i])!=tolower(s[j])) {
                        std::cout << "break" << '\n';
                        return false;
                    }else{
                        i++;
                        j--;
                        continue;
                    }
                }else{
                    j--;
                    continue;
                }
            }else{
                i++;
            }
        }
        return true;
    }
};
