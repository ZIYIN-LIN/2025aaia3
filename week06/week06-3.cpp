//week06-3.cpp
//Leetcode �ǲ߭p�e simulation ���� �a1�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op:operations){//C++�i���j��
            //cout << op <<"\n";�ոլ�,�|�L�X�ƻ�
            if(op[0]=='+'){//�⥽��X�ۥ[�A�b��^�h
            int temp =a.back();//���O�U�̫�1
            a.pop_back();
            int temp2 =a.back();//�O�U�̫�2
            a.push_back(temp);
            a.push_back(temp+temp2);
            }else if(op[0]=='D'){//�ƻs�̫�@��
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){//�R���̫�@��
                a.pop_back();
            }else {//��stoi(op)��ơA��^�h
                a.push_back(stoi(op));
            }
        }
        //�̫�A��for�A��}�Ca�����[�_��
        int ans =0;
        for(int now: a){//C++�i���j��A�]�i�H��for(int i++)
            ans+=now;
        }
        return ans;//���H�Kreturn 0
    }
};
