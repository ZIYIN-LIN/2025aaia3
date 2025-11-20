//week11-3.cpp學習計畫 Math 第三題
//Leetcode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0,d10=0,d20=0;//三種鈔票
        for(int bill:bills){//c++進階迴圈
            if(bill==5) d5++;//拿到5元鈔
            if(bill==10){//客人給10元，要找5元
                if (d5<1) return false;
                d10++;
                d5--;
            }
            if(bill==20){//要找15元
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }  else return false;//找不開
            }
        }
        return true;//成功
    }
};
