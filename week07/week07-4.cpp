// week07-4.cpp �ǲ߭p�eSimulation ������4�D
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions;//��4��
        cout<<instructions;
        int x=0,y=0;//���I
        int d=0;//��Vdirection 0:�_ 1:�F 2:�n 3:��
        //�k�� d=(d+1)%4 ��4���l��
        int dx[4]={0,1,0,-1};//�e�i�@��
        int dy[4]={1,0,-1,0};//����
        for (char c:instructions){//�̦r�������O
            if(c=='G'){//�e�i1��
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){//�k��
                d=(d+1)%4;
            }else if (c=='L'){//����
                d=(d+3)%4;
            }
        }//���}�j��
        cout<<'x'<<x<<'y'<<y<<endl;
        if(x==0 & y==0) return true;
        else return false;
    }
};
