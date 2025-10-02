//week04-3.cpp
//Leetcode 學習計畫第7題66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        for(int i=N-1;i>=0;i--){//倒過來的迴圈
            if(digits[i]==9){//要進位
                digits[i] =0;//設成0，繼續做，不結束
            }else{//不用進位，直接++
                digits[i]++;//+1
                return digits;//把全部陣列當答案return

            }
        }
        digits.insert(digits.begin(),1);//最左邊要插入1
        return digits;//結束
    }
};
