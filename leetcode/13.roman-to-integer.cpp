class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mymap;
        mymap.insert(pair<char,int>('I',1));
        mymap.insert(pair<char,int>('V',5));
        mymap.insert(pair<char,int>('X',10));
        mymap.insert(pair<char,int>('L',50));
        mymap.insert(pair<char,int>('C',100));
        mymap.insert(pair<char,int>('D',500));
        mymap.insert(pair<char,int>('M',1000));
        int counter=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='I')
            {
                if(s[i+1]=='V'){
                    counter+=mymap['V']-mymap['I'];
                    i++;
                }else if (s[i+1]=='X'){
                    counter+=mymap['X']-mymap['I'];
                    i++;
                }else{
                    counter+=mymap[s[i]];
                }
            }else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    counter+=mymap['L']-mymap['X'];
                    i++;
                }else if (s[i+1]=='C'){
                    counter+=mymap['C']-mymap['X'];
                    i++;
                }else{
                    counter+=mymap[s[i]];
                }
            }else if (s[i]=='C'){
                if(s[i+1]=='D'){
                    counter+=mymap['D']-mymap['C'];
                    i++;
                }else if (s[i+1]=='M'){
                    counter+=mymap['M']-mymap['C'];
                    i++;
                }else{
                    counter+=mymap[s[i]];
                }
            }else{
                counter+=mymap[s[i]];
            }
        }
        return counter;
    }
};