//week04-1.cpp
//leetcode�D���D3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;//�@�}�l�N�ܶP�o��h��
        while(numBottles >= numExchange){//�p�G�~�l��>=�I���q�N�I��
            numBottles = numBottles-numExchange +1;//�I���@�~
            ans++;//�h�ܤ@�~�F
            numExchange ++;//�I�����зǦh�@�~
        }
        return ans;
    }
};
