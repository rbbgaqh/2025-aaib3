///week05-3b.cpp
///part3: stringstream�_�r
///cpe�ҸղĤG�D �k�G
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>///part�ϹL�ӭn�Ψ�algorithm�t��k
using namespace std;
int main()
{

        string line; ///part1:input
        while(getline(cin, line) ){
        ///Ū�J1��¾�@��Ū��ctrl-z�~����
        stringstream ss(line);
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());///�ϹL��
            cout<<" "<<word;
        }
        cout<<endl;///����
        ///part2:output
        ///cout<< line<< endl;*///���H�K�L�X��
        }
}

