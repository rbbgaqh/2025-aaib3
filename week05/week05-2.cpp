///Week05-2.cpp
///�d�� stringstream
#include <iostream>///�� cin cout
#include <string>///���F�r��string
#include <sstream>///�s��string��stream���~��
using namespace std;///���F���gstd::cin
int main()
{
    string line;///�ǳƩ�@��檺�r��
    getline(cin,line);///�@��Ū�J�@���
    cout<< line;

    stringstream ss(line);///�s����string�ܦ�stream
    string word;
    while(ss >> word){
        cout<<"ssŪ��@�Ӧr:"<<word<<endl;
    }
}
