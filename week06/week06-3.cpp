//week06-3.cpp
//Leetcode 學習計畫 simulation 模擬 地1題 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op:operations){//C++進階迴圈
            //cout << op <<"\n";試試看,會印出甚麼
            if(op[0]=='+'){//把末兩碼相加，在塞回去
            int temp =a.back();//先記下最後1
            a.pop_back();
            int temp2 =a.back();//記下最後2
            a.push_back(temp);
            a.push_back(temp+temp2);
            }else if(op[0]=='D'){//複製最後一位
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){//吐掉最後一位
                a.pop_back();
            }else {//把stoi(op)整數，塞回去
                a.push_back(stoi(op));
            }
        }
        //最後，用for，把陣列a全部加起來
        int ans =0;
        for(int now: a){//C++進階迴圈，也可以用for(int i++)
            ans+=now;
        }
        return ans;//先隨便return 0
    }
};
