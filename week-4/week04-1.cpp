///week04-1.cpp
///�Ʋ�vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///���Y�ۦp���}�C �S����l�ƪ��j�p
    cout<<"a�����׬O"<<a.size()<< endl; ///�@�}�l�j�p�O0

    a.push_back(99); ///�U���٦��ܦh
    cout<<"a��������" <<a.size()<< endl;

    vector<int> b(3);///���Y�ۦp���}�C���׬O3�̭����O0
    cout<<"b�����׬O"<<b.size()<< endl;

    b.push_back(99);///�̫᭱�[1��99
    for(int i=0;i<b.size();i++) cout << b[i] << ' ';/// 0 0 0 99
    cout<<"�g�L.push_back(99)���ܪ��F"<<endl;

    vector<int> c(3,88);///���Y�ۦp���}�C���׬O3
    for(int i=0; i<c.size();i++)cout<<c[i]<<' ';///88 88 88
    cout<<"��l��(3,88)�N�|��3��88"<<endl;
    ///�U���٦��ܦh ���U�@�ӧ@�~ ���n�@����Ӧh
}
