//week03-2a�G�X�@�n�g2��
//LeetCode�ǲ߭p�e�a8�D1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//�]��0������Ƴ���0,��1�̨�,������N�ܤ���
        for(int i=0;i<nums.size();i++){//�Y���X�Ӽ�,�j��]�X��
            ans *= nums[i];//�C����nums[i]���ians��
        }//�Ʀr�V�{�V�j,1000�ӼƦr,����Ѥ@�b,�N�z���F,�ҥH�{�����F,����
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
