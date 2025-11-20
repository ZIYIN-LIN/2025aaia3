//week11-4.cpp厩策璸礶Math
//Leetcode 67. Add Binary秈ゼ猭
//ノ﹃笷秈计
class Solution {
public:
    string addBinary(string a, string b) {
        int i= a.length()-1,j=b.length()-1;//程娩计
        vector<int> ans;//罽皚氮
        int carry=0;
        while(i>=0||j>=0){//秈︽猭
            int now=carry;
            if (i>=0){
                now +=a[i]-'0';//筁ㄓ癹伴
                i--;
            }
            if(j>=0){
                now+= b[j]-'0';
                j--;
            }
            ans.push_back(now%2);//氮
            carry=now/2;//Τ⊿Τ秈ゼ
        }
        if(carry>0)ans.push_back(carry);//Τ秈ゼ
        string strAns;//程
        for(int i=ans.size()-1;i>=0;i--){
            strAns=strAns+(char)(ans[i]+'0');
        }
        return strAns;
    }
};
