//week04-2.cpp
//Leetcode �ǲ߭p�e��10�D896. Monotonic Array
//�}�C�ܳ�աA�u���W�[or�u����֡C���i�H�S���S��
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
