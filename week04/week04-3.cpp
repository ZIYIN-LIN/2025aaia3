//week04-3.cpp
//Leetcode �ǲ߭p�e��7�D66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        for(int i=N-1;i>=0;i--){//�˹L�Ӫ��j��
            if(digits[i]==9){//�n�i��
                digits[i] =0;//�]��0�A�~�򰵡A������
            }else{//���ζi��A����++
                digits[i]++;//+1
                return digits;//������}�C����return

            }
        }
        digits.insert(digits.begin(),1);//�̥���n���J1
        return digits;//����
    }
};
