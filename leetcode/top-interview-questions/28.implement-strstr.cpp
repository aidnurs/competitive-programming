class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1;
        if(needle.length()==0){
            return 0;
        }
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i]==needle[0]) {
                for (int j = 0; j < needle.length(); j++) {
                    if (haystack[i+j]==needle[j]&&j==needle.length()-1) {
                        index=i;
                        break;
                    }
                    if (haystack[i+j]!=needle[j]) {
                        break;
                    }
                }
                if(index==i){
                    break;
                }
            }
        }
        return index;
    }
};
