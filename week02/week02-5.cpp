//week02-5.cpp Leetcode �ǲ߭p�e ��2�D
//389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //����,�έp�@�U 26�r��,�X�{�X��ASCIL:0-225
        int A[256] = {};//�����ŧi,�}�C�Τj�A���w�]��0
        for(int i=0;i<s.length();i++){
            char c =s[i];//����i�r��
            A[c]++;//������i�������r�����
        }
        for(int i=0;i<t.length();i++){
            char c = t[i];//����i�r��
            A[c]--;//�q��l��,���X�r��
            if(A[c]<0)return c;//�r�������δN�O�L
        }
        return 0;
    }

};
