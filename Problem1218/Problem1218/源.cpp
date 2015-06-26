#include<iostream>
#include<cmath>
using std::endl;
using std::cin;
using std::cout;

int a;
int times;
int main()
{
	for (cin>>times; times; times--)
	{
		cin >> a;
		a = sqrt((double)a);
		cout << a << endl;
	}
	system("pause");
	return 0;
}