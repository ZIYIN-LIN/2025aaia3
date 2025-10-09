//week05-4.cpp
//Leetcode 學習計畫709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){//每個字母
            s[i]= tolower(s[i]);//變小寫
        }//每個字母都要小寫
        return s;
    }
};
