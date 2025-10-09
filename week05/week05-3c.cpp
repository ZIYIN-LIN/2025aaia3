///week05-3b.cpp PART2:Output
///Part3:stringstream Part4
///CPE第二題 UVA 483倒過來
#include <iostream>
#include <sstream>///Part3 stringstream的檔案是sstream
#include <algorithm>///Part 4:reverse的演算法
using namespace std;
int main()
{
    string line;///一行字的字串
    while (getline(cin,line)){///讀進來
        stringstream ss(line);///Part3 stringstream 斷字
        string word;
        ss >> word;
        reverse(word.begin(), word.end());
        cout << word;
        while (ss>>word){///Part3 用ss斷字
            reverse(word.begin(),word.end());
            cout<<" "<<word;
        }
        cout<<endl;
    }
}

