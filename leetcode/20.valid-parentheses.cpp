class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                c.push(s[i]);
            }
            if(s[i]==')'){
                if(!c.empty()&&c.top()=='('){
                    c.pop();
                }else{
                    return false;
                }
            }
            if(s[i]=='}'){
                if(!c.empty()&&c.top()=='{'){
                    c.pop();
                }else{
                    return false;
                }
            }
            if(s[i]==']'){
                if(!c.empty()&&c.top()=='['){
                    c.pop();
                }else{
                    return false;
                }
            }
        }
        return c.empty();
    }
};