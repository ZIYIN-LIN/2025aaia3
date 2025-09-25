//week03-2b璶糶2Ω
//LeetCode厩策璸礶8肈1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//0ヴ计常0,1程,ぐ或碞跑ぐ或
        for(int i=0;i<nums.size();i++){//璝Τ碭计,癹伴禲碭Ω
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
        }//计禫祘禫,1000计,逞,碞脄,┮祘Α岿,躲躲躲
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
