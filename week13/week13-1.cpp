//week13-1.cpp聖誕倒數寫程式Advent of Code 2025
//Moodle點adventocode.com 可看到題目
//LeetCode的My Playground ，就可以寫了
//LeetCode 幫你把#include加好
//右下stdin可貼上程式
//在adventocode.com登入你的Github帳號後能看到專屬input
//貼到右下角
int main() {
    char c;//字母，對應的方向L左轉R右轉
    int d;//數字要轉幾格
    int now=50;//一開始的密碼鎖指向50
    int ans = 0;//轉動有幾次停在0
    while(cin>>c>>d){//一直讀資料:讀字母，讀數字
        //if(c=='L')cout<<"往左轉"<< d <<"格\n";
        //if(c=='R')cout<<"往右轉"<< d <<"格\n";
        if(c=='L')now=now-d;//減掉
        if(c=='R')now=now+d;

        now=(now%100+100)%100;
        //cout<<"現在刻度是:"<<now<<"\n";
        if (now==0)ans++;
    }
    cout<<"答案是:"<<ans;
}
/*
R48
L5
R60
L55
L1
L99
R14
L82
*/
