class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        int j=s.size()-1;
        int i=0;
        while(j-i>0){
            c=s[i];
            s[i]=s[j];
            s[j]=c;
            i++;
            j--;
        }
    }
};
