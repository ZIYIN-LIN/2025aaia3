///week08-4.cpp
///�Ʀr�¬} �d���C�J�`�� 6147(�j��p-�p��j-����7��)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"�п�J���N4���(�����P):";///ex.1234 1 2 3 4
    int n;
    cin>>n;
    for(int i=0;i<7;i++){///�C���B6174
        vector<int> a;///���Y�ۦp�}�C
        while(n>0){///��֪k�A��4��Ƴv�@��
            a.push_back(n%10);///��o����}�C
            n=n/10;
        }
        sort(a.begin(),a.end());///�p��j�Ʀn
        int M=a[3]*1000+a[2]*100+a[1]*10+a[0];///�˹L��
        int m=a[0]*1000+a[1]*100+a[2]*10+a[3];///�p�j�j
        n=M-m;
        cout<< M<<"�"<<m<<"�o��:"<<n<<endl;
    }
}
