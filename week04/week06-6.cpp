///week04-6.cpp
///�m�߭Ӻئ��Y�ۦp���}�C vector<int>a����l��
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;///(1)�S�������l�ưѻP����0
    cout<< endl<<"�}�Ca�����׬O"<<a.size()<<endl;

    vector<int> b(3);///(2)���ӰѼƹ���������3
    cout<<endl<<"�}�Cb�����׬O"<<b.size()<<endl;
    for(int i=0;i<b.size();i++) cout<< b[i] <<" ";

    vector<int> c(3,88);///(3)����33
    cout<<endl<<"�}�Cc�����׬O"<<c.size()<<endl;
    for(int i=0;i<c.size();i++) cout<< c[i] <<" ";

    int d[10] ={9,8,7,1,2,3,6,5,4,0};
    vector<int> f(d,d+4);///c�y��
    cout<<endl<<"�}�Cb�����׬O"<<f.size()<<endl;
    for(int i=0;i<f.size();i++) cout<< f[i] <<" ";

    vector<int> g(d,d+10);
    cout<<endl<<"�}�Cg�����׬O"<<g.size()<<endl;
    for(int i=0;i<g.size();i++) cout<< g[i] <<" ";
}
