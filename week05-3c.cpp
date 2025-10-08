///week05-3c.cpp
///part3: stringstream斷字
///cpe考試第二題 把字弄反
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
        stringstream ss(line);///把字串用來斷字
        string word;///用來斷字
        ss>>word;///解決空格問題 火車頭不用空格
        reverse(word.begin(),word.end());
        cout<<word;///part 5 解決空格問題 火車頭不用空格
        while(ss>>word){///part3把字串用來斷字
            reverse(word.begin(),word.end());///part4 反過來
            cout<<" "<<word;
        }
    }
    cout<<endl;///跳行///part2:output
    ///cout<< line<< endl;*///先隨便印出來
}

