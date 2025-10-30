//week08-2.cpp LeetCode學習計畫 Matrix第四題
// 73. Set Matrix Zeroes 設定堆0
//要小心 不能一邊讀一邊設0 先讀完再設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //地1階段 先讀完 記下全部的零對應的i和i和j
        int M = matrix.size(), N = matrix[0].size();//左手M右手N
        vector<int> markI(M,0), markJ(N,0);//宣告c++的陣列,長度為M N裡設成0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){//要記下對應的i,j
                    markI[i] = 1;//標記i整個橫條耀欽為0
                    markJ[j] = 1;//標記j整個直條耀欽為0
                }
            }
        }
        //第二階段在標記整條清為0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
