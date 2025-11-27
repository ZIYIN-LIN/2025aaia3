//week12-4.cpp
//Leetcode 1232. Check If It Is a Straight Line
//點是否有在同一條直線上
//斜率 a:b=c:d或a/b=c/d=c/d或a*d==b*c
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       int x0=coordinates[0][0],y0=coordinates[0][1];
       int x1=coordinates[1][0],y1=coordinates[1][1];
       int dx=x1-x0,dy=y1-y0;//差值
       for(int i=2;i<coordinates.size();i++){
            int xx=coordinates[i][0],yy=coordinates[i][1];//不相等失敗
            if(dx*(yy-y0) !=dy*(xx-x0)) return false;
       }
       return true;
    }
};
