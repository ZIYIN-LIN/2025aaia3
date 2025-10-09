///week05-3b.cpp PART2:Output
///CPE第二題 UVA 483倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;///一行字的字串
    while (getline(cin,line)){///讀進來
        stringstream ss(line);
        string word;
        while (ss>>word){
            reverse(word.begin(),word.end());
            cout<<"讀到了"<<word<<endl;
        }
        cout<<line<<endl;
    }
}
