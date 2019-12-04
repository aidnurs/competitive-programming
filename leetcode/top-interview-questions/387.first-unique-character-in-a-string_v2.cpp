class Solution {
public:
    int firstUniqChar(string s) {
        std::map<char, int> mymap;
        for (int i = 0; i < s.length(); i++) {
            mymap[s[i]]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (mymap[s[i]]==1) {
                return i;
            }
        }
        return -1;
    }
};
