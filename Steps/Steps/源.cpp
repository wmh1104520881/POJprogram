/*
POJ No.2590:
    �������ϵ�����֮�䣬������������ƶ�
	��1��ÿһ���Ĳ�����Ҫ����Ȼ����ͬʱ������ǰһ���Ĳ�����ͬ�����ǲ�1
	 ��2����һ�������һ���Ĳ���������1.

�������˼·�������������������һ�룬���������Ҫ�Ĳ�����Ȼ�󽫲�����2���ܱ�Ǹ������˼·��������
          ����ģ������1������Ϊx=45,y=48��x=45,y=50���м䲽������2������һ���ܲ�����3��һ���ܲ�����4����
		  �Ժ����ж��ĸ��ó�2.
��ȷ����˼·���������ĳ��Χ�ڵĲ���������ĳ��������ܵ��೤���롣Ȼ���ҳ�����,ͨ������2���Է��֣�
                 +1   +1  +2  +2  +3  +3  +4  +4  +5  +5...
			   0	1	2	4	6	9	12	16	20	25	30...
			   ÿ��һ�����ӵľ���ͼӶ�1.���ǿ���д����ȷ����
*/


#include<iostream>
using namespace std;

//����1
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
//����2
int CountMaxDst()
{
	//���20���ڵľ���
	for (int step = 0; step <= 20; ++step)
	{
		//�����м䲽���ҳ��м䲽�����ߵľ���
		//������������������м䲽����1
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
	//��ȷ����
	int x, y;     //�������
	int dst;     //����
	int len;
	int n;      //���Դ���
	cin >> n;
	for (; n--;)
	{
		cin >> x >> y;
		dst = y - x;
		int steps;
		for (steps = len = 0; len+steps < dst; ++steps)
			len += steps / 2;     //ÿ��һ����1
		cout << steps << endl;
	}
	system("pause");
	return 0;
}