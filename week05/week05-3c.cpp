///week05-3b.cpp PART2:Output
///Part3:stringstream Part4
///CPE�ĤG�D UVA 483�˹L��
#include <iostream>
#include <sstream>///Part3 stringstream���ɮ׬Osstream
#include <algorithm>///Part 4:reverse���t��k
using namespace std;
int main()
{
    string line;///�@��r���r��
    while (getline(cin,line)){///Ū�i��
        stringstream ss(line);///Part3 stringstream �_�r
        string word;
        ss >> word;
        reverse(word.begin(), word.end());
        cout << word;
        while (ss>>word){///Part3 ��ss�_�r
            reverse(word.begin(),word.end());
            cout<<" "<<word;
        }
        cout<<endl;
    }
}

