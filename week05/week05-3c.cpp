///week05-3c.cpp
///part3: stringstream�_�r
///cpe�ҸղĤG�D ��r�ˤ�
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
        stringstream ss(line);///��r��Ψ��_�r
        string word;///�Ψ��_�r
        ss>>word;///�ѨM�Ů���D �����Y���ΪŮ�
        reverse(word.begin(),word.end());
        cout<<word;///part 5 �ѨM�Ů���D �����Y���ΪŮ�
        while(ss>>word){///part3��r��Ψ��_�r
            reverse(word.begin(),word.end());///part4 �ϹL��
            cout<<" "<<word;
        }
    }
    cout<<endl;///����///part2:output
    ///cout<< line<< endl;*///���H�K�L�X��
}

