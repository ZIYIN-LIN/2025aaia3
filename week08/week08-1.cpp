//week08-1.cpp Leetcode學習計畫Matrix第一題
//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;//迴圈前面 now=0
        for (int i=0; i<accounts.size();i++){
            int now =0;
            for(int j=0;j<accounts[0].size();j++){
                now+=accounts[i][j];//把錢加起來
            }//迴圈裡更新now 陣列左手i右手j
            //迴圈後面now 拿來用
            ans =max(ans,now);
        }
        return ans;
    }
};
