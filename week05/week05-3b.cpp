///week05-3b.cpp PART2:Output
///CPE�ĤG�D UVA 483�˹L��
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;///�@��r���r��
    while (getline(cin,line)){///Ū�i��
        stringstream ss(line);
        string word;
        while (ss>>word){
            reverse(word.begin(),word.end());
            cout<<"Ū��F"<<word<<endl;
        }
        cout<<line<<endl;
    }
}
