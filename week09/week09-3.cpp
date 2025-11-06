//week09-3.cpp學習計畫Matrix第三題
//Leetcode54. Spiral Matrix用AI助手
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        int up=0,down=M-1,left=0,right=N-1;
        //先把上下左右邊界，都宣告一個原始值
        vector<int>ans;
        while(up<=down&&left<=right){
            for(int i=left;i<=right;i++){//往右
                ans.push_back(matrix[up][i]);
            }
            up++;//要寫up++
            for(int i=up;i<=down;i++){//up到down
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(!(up<=down && left<=right)) break;//無法繼續

            for(int i=right;i>=left;i--){//倒過來往左
                ans.push_back(matrix[down][i]);
            }
            down--;
            for(int i=down;i>=up;i--){//倒過來往下
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
