//LeetCode 28 Find the Index of the First Occurrence in a String
//在 haystak 乾稻草堆 裡找到 needle(大海撈針)
//haystak: sadbutsad

class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(),N = needle.length();//字串的長度
        for(int i=0 ; i <= H -N ; i++){ //9減3得到6
            //.substr(開始, 長度)部分的字串
            if(haystack.substr(i, N) == needle) return i;//找到答案
        }
        return -1;//迴圈裡面 找不到needle 就失敗
    }
};