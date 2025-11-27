//Leetcode 976. Largest Perimeter Triangle
//找可構成三角形三邊常，加起來最大 兩邊和>第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //把大小印出來
        //for(int i=nums.size()-1;i>=0;i--){
            //cout <<nums[i]<<" "
        for(int i=nums.size()-1;i>=2;i--) {
            //讀取nums[i] vs. nums[i-1+nums[i-2]
            if(nums[i] < nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }//找最大
        }
        return 0;
    }
};
