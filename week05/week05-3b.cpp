///week05-3b.cpp
///part3: stringstream斷字
///cpe考試第二題 法二
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>///part反過來要用到algorithm演算法
using namespace std;
int main()
{

        string line; ///part1:input
        while(getline(cin, line) ){
        ///讀入1行職一直讀到ctrl-z才結束
        stringstream ss(line);
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());///反過來
            cout<<" "<<word;
        }
        cout<<endl;///跳行
        ///part2:output
        ///cout<< line<< endl;*///先隨便印出來
        }
}

