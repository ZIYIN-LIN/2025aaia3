//week10-1a 第一次for回圈，第二次用教學
//1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans =0;
        for(int i=low;i<=high;i++){
            if(i%2==1)ans ++;
        }
        return ans;
    }
};
