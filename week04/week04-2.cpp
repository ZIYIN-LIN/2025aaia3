//week04-2.cpp
//Leetcode 學習計畫第10題896. Monotonic Array
//陣列很單調，只有增加or只有減少。不可以又曾又少
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     int up =0,down=0;
     for(int i=1;i<nums.size();i++){
        if(nums[i-1]<nums[i]) up=1;
        if(nums[i-1]>nums[i]) down=1;
    }
    if(up==1 && down==1)return false;
    return true;
    }
};
