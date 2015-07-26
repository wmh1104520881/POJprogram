/*
POJ No.2590:
    在数轴上的两点之间，按照下面规则移动
	（1）每一步的步幅都要是自然数，同时必须与前一步的步幅相同或者是差1
	 （2）第一步和最后一步的步幅必须是1.

错误解题思路：可以先求出两点距离的一半，再求出所需要的步数，然后将步数乘2，很抱歉，这种思路可能是有
          问题的（如代码1），因为x=45,y=48和x=45,y=50的中间步数都是2，但是一个总步数是3，一个总步数是4，所
		  以很难判断哪个该乘2.
正确解题思路：可以求出某范围内的步数，看看某步数最大能到多长距离。然后找出规律,通过代码2可以发现：
                 +1   +1  +2  +2  +3  +3  +4  +4  +5  +5...
			   0	1	2	4	6	9	12	16	20	25	30...
			   每隔一步增加的距离就加多1.于是可以写出正确代码
*/


#include<iostream>
using namespace std;

//代码1
int CountSteps(int x, int y)
{
	int d = y - x;
	if (d % 2 != 0)
	{
		d = d + 1;
	}
	//cout << d << endl;
	int len = 0;
	int step = 0;
	for (; (len += (++step)) < d / 2;);
	//cout << step << endl;
	if (step % 2 != 0)
	{
		step = step * 2 - 1;
	}
	else
		step = step * 2;
	return step;
}
//代码2
int CountMaxDst()
{
	//求出20步内的距离
	for (int step = 0; step <= 20; ++step)
	{
		//计算中间步数找出中间步数能走的距离
		//如果步数是奇数，则中间步数加1
		int midStep = step / 2 + step % 2;
		int len = 0;
		for (int i = 1; i <= midStep; ++i)
			len += i;
		for (int j = step / 2; j > 0; --j)
			len += j;
		cout << step << " steps can go : " << len << endl;
	}
	return 1;
}
int main()
{
	//CountMaxDst();
	//正确代码
	int x, y;     //输入变量
	int dst;     //距离
	int len;
	int n;      //测试次数
	cin >> n;
	for (; n--;)
	{
		cin >> x >> y;
		dst = y - x;
		int steps;
		for (steps = len = 0; len+steps < dst; ++steps)
			len += steps / 2;     //每隔一步加1
		cout << steps << endl;
	}
	system("pause");
	return 0;
}