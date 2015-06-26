#include<iostream>
using std::cin;
using std::cout;
using std::endl;

float b;   //用户输入长度
int n = 1;  //牌数

int main()
{
	//逗号表示第二条件，如果b不为0则为真
	for (; cin >> b,b; cout << n - 1 << " card(s)" << endl,n = 1)
	{
		for (; (b -= 1.0 / ++n) > 0;)
			;
	}
	system("pause");
	return 0;
}