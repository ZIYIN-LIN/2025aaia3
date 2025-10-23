///week07-2.cpp像畫星星一樣
///畫超大正方形，數字包起來
///TAICA 交大基礎程式設計(c++)期中考第二題
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
        cout << endl///cout<<"現在i是:"<<end1;///樓層

    }
}///2會有3層樓,3會有5層樓，4會有7層樓
