class Solution {
public:
    bool judgeCircle(string moves) {
        char c;
        int h=0,v=0;
        for(int i=0;i<moves.length();i++){
            c=moves[i];
            switch(c){
                case 'R': h++; break;
                case 'L': h--; break;
                case 'U': v++; break;
                case 'D': v--; break;
            }
        }
        if(h==0&&v==0){
            return true;
        }
        return false;
    }
};
