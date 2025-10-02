//week04-1.cpp
//leetcode珼驹肈3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;//秨﹍碞耻禤硂或蝶
        while(numBottles >= numExchange){//狦瞺计>=传秖碞传
            numBottles = numBottles-numExchange +1;//传瞺
            ans++;//耻瞺
            numExchange ++;//传夹非瞺
        }
        return ans;
    }
};
