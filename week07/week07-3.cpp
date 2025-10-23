//week07-3.cpp學習計畫Simulation 第三題
//1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:             //vector是c++的陣列
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};//C語言的陣列
        //{}代表粗使直,裡面空的代表都是0
        int now=1;//1:玩家A，2:玩家B
        int winner=0;//還沒找到得勝玩家
        for(vector<int> & move:moves){
            int i= move[0],j=move[1];//取出座標
            a[i][j]=now;//把旗子，下在陣列裡
            //下完後要檢查有沒有得勝
            if(now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now;//橫線
            if(now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now;//直線
            if(now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now;//左上右下
            if(now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now;//右上左下
            if(now==1) now=2;//要交換
            else now =1;
        }
        if(winner==1) return"A";
        else if(winner==2) return"B";
        else if(moves.size()==9) return"Draw";//平手
        else return"Pending";
    }

};
