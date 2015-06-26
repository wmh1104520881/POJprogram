#include<iostream>

using std::cin;
using std::cout;
using std::endl;

char str[100];
int main()
{
	for (; gets_s(str); cout << str << endl)
		;
	system("pause");
	return 0;
}