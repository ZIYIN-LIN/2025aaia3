//week05-4.cpp
//Leetcode �ǲ߭p�e709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){//�C�Ӧr��
            s[i]= tolower(s[i]);//�ܤp�g
        }//�C�Ӧr�����n�p�g
        return s;
    }
};
