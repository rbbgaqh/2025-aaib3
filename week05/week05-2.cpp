///Week05-2.cpp
///搞懂 stringstream
#include <iostream>///為 cin cout
#include <string>///為了字串string
#include <sstream>///新的string變stream的外掛
using namespace std;///為了不寫std::cin
int main()
{
    string line;///準備放一整行的字串
    getline(cin,line);///一次讀入一整行
    cout<< line;

    stringstream ss(line);///新的把string變成stream
    string word;
    while(ss >> word){
        cout<<"ss讀到一個字:"<<word<<endl;
    }
}
