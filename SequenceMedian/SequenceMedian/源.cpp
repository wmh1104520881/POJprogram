/*
题目：输入几个非负整数，首先对这些数排序，然后求出中间值。
要求：输入的第一行是数据总数n，之后N行是连续非负整数
如：4 3 6 4 5
输出：4.5
解题思路：题目非常简单，但是是注意几点：
1.题目中并没有给出数和数目的大小，所以要考虑溢出问题。
2.如果输入奇数个数，则刚好可以找到中间数，如果是偶数个数，则要计算两个数平均值
3.如果要表示很大的数组，可以用字符表示，这样可以缩小代码所点的内存。
如表示616263，且int表示要4个字节，如果用‘abc'表示只需要3个字节
*/
//代码
#include<iostream>
using namespace std;
int cmp(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}
int d['abc'];
int main()
{
	int m;
	int i = 0;
	for (; cin >> d[i]; ++i)
		;
	//输入的第一个数是输入总数，然后排序从d[1]开始，排序大小减掉1
	qsort(d + 1, i - 1, 4, cmp);
	m = i / 2 + 1;    //因为数组往前移了一位，所以中间数也相应要向前移一位
	cout << (i % 2 ? (d[m] / 2. + d[m - 1] / 2.) : d[m - 1]) << endl;
	system("pause");
	return 0;
}