//week02-2.cpp C++
#include <iostream>///IO��y�~��
#include <string>///�r��~��
using namespace std; ///�ϥΩR�W�Ŷ�std
int main()
{
    cout<<"�п�J�Ʀr:";
    string a, ans;///c++���r��
	cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j�� �r�ꪺ���ץsa.length()
    for(int i=a.length()-1;i>=0; i--){
            ans+=a[i];///��r���˹L�� ��J����
    }
	cout << a << ans;
}
