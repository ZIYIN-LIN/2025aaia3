///week07-2.cpp���e�P�P�@��
///�e�W�j����ΡA�Ʀr�]�_��
///TAICA ��j��¦�{���]�p(c++)�����ҲĤG�D
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;///Part1:Input
    cin>>n;

    for(int i=1;i<n*2;i++){///Part2:Output
        for(int j=1;j<n*2;j++){

            int d=max(abs(i-n),abs(j-n));
            cout <<d+1;///cout<< n
        }
        cout << endl///cout<<"�{�bi�O:"<<end1;///�Ӽh

    }
}///2�|��3�h��,3�|��5�h�ӡA4�|��7�h��
