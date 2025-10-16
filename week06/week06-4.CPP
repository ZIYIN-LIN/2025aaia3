//week06-4.cpp
//657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c: moves){//開始在原點
            if(c=='U'){
                y++;
            }else if(c=='D'){
                y--;
            }else if(c=='L'){//往左
                x--;
            }
            else if(c=='R'){//往右
                x++;
            }
        } //最後還有留甚麼
        if(x==0 && y==0) return true;
        else return false;
    }
};
