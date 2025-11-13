//week10-3.cpp 羅馬數字
//LeetCode Roman to Integer
//1:I  2:II 3:III 4:IV
//(1)要有對照表 字母對數字
//(2)正常的相加，倒裝句
//input:"MCMXCIV"
//M:1000, (C:100,M:1000)
class Solution {
public:
    int helper(char c){
        if (c=='I') return 1;
        if (c=='V') return 5;
        if (c=='X') return 10;
        if (c=='L') return 50;
        if (c=='C') return 100;
        if (c=='D') return 500;
        if (c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total =0,prev,now;
        for (int i=0; i<s.length();i++){
            //錯誤total+=helper(s[i]);//沒有倒裝
            prev=now;//舊的prev
            now=helper(s[i]);//新的數字
            if (prev<now) total = total - prev - prev + now;//倒裝
            else total +=now;
        }
         return total;
    }

};
