class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> mymap;
        if (s.length()!=t.length()) {
            return false;
        }
        for (size_t i = 0; i < s.length(); i++) {
            mymap.insert(pair<char,int>(s[i],mymap[s[i]]++));
        }
        for (size_t i = 0; i < t.length(); i++) {
            if (mymap.find(t[i])!=mymap.end()) {
                mymap[t[i]]--;
            }else{
                return false;
            }
        }
        for (map<char,int>::iterator itr = mymap.begin(); itr != mymap.end(); itr++) {
            if (itr->second!=0) {
                return false;
            }
        }
        return true;
    }
};
