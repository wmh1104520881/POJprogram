#include<iostream>
using std::cin;
using std::cout;
using std::endl;

float b;   //�û����볤��
int n = 1;  //����

int main()
{
	//���ű�ʾ�ڶ����������b��Ϊ0��Ϊ��
	for (; cin >> b,b; cout << n - 1 << " card(s)" << endl,n = 1)
	{
		for (; (b -= 1.0 / ++n) > 0;)
			;
	}
	system("pause");
	return 0;
}