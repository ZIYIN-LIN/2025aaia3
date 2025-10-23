// week07-4.cpp 學習計畫Simulation 模擬第4題
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions;//走4次
        cout<<instructions;
        int x=0,y=0;//原點
        int d=0;//方向direction 0:北 1:東 2:南 3:西
        //右轉 d=(d+1)%4 取4的餘數
        int dx[4]={0,1,0,-1};//前進一格
        int dy[4]={1,0,-1,0};//模擬
        for (char c:instructions){//依字母的指令
            if(c=='G'){//前進1格
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){//右轉
                d=(d+1)%4;
            }else if (c=='L'){//左轉
                d=(d+3)%4;
            }
        }//離開迴圈
        cout<<'x'<<x<<'y'<<y<<endl;
        if(x==0 & y==0) return true;
        else return false;
    }
};
