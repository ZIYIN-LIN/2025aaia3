//week02-5.cpp Leetcode 學習計畫 第2題
//389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //分類,統計一下 26字母,出現幾次ASCIL:0-225
        int A[256] = {};//分類宣告,陣列用大括號預設值0
        for(int i=0;i<s.length();i++){
            char c =s[i];//找到第i字母
            A[c]++;//分類放進對應的字母桶裡
        }
        for(int i=0;i<t.length();i++){
            char c = t[i];//找到第i字母
            A[c]--;//從桶子哩,拿出字母
            if(A[c]<0)return c;//字母不夠用就是他
        }
        return 0;
    }

};
