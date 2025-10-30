//week08-2.cpp LeetCode�ǲ߭p�e Matrix�ĥ|�D
// 73. Set Matrix Zeroes �]�w��0
//�n�p�� ����@��Ū�@��]0 ��Ū���A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //�a1���q ��Ū�� �O�U�������s������i�Mi�Mj
        int M = matrix.size(), N = matrix[0].size();//����M�k��N
        vector<int> markI(M,0), markJ(N,0);//�ŧic++���}�C,���׬�M N�̳]��0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){//�n�O�U������i,j
                    markI[i] = 1;//�аOi��Ӿ��ģ�ܬ�0
                    markJ[j] = 1;//�аOj��Ӫ���ģ�ܬ�0
                }
            }
        }
        //�ĤG���q�b�аO����M��0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
