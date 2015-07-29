/*
POJ No.2371 questions and answers
题目描述：有一个存放自然数的数据库，为了提高读取速度，需要给出索引Key值。根据索引值从数据
          库中读取需要的数据。
输入和输出：输入数据可以分成2个块。第1个块为作数据库，第1行是数据个数n（1-100000）,接下来的n
          行是数据内容，紧接着的下一行放进去分隔符号“###”，接下来是第2个块，第2个块也是相同
		  格式。首先是数据总数k（1-100），接下来的k行是n以下的自然数i。请从数据库中包含的自然
		  数里找出从小到大的第i个值并输出。
例如输入：5 7 121 123 7 121 ### 4 3 3 2 5
输出：    121 121 7 123

解题思路：因为要求从小到大输出，所以需要对数据库的数据排序。数据是比较大（1-100000），可以选择
          快速排序。为了缩短代码，可以将数据个数与数据数组放在一起，排序从d[1]开始就可以了。
*/

//常规代码
#include<iostream>
#include<string>
using namespace std;

int cmp(const void* a, const void *b)
{
	return *(int*)a - *(int*)b;
}
int d['abc'];
int main()
{
	int i,j,k,n,v;
	cin >> n;
	for (j = 0; j < n; ++j)
	{
		cin >> v;
		d[j] = v;
	}
	string c;
	cin >> c;
	qsort(d,n,4,cmp);
	for (int s = 0; s < j;++s)
		cout << d[s] << " ";
	cout << endl;
	cin >> k;
	for (j = 0; j < k; ++j)
	{
		cin >> i;
		cout << d[i-1] << endl;
	}
	system("pause");
	return 0;
}


//优化代码
int main()
{
	int j=0;
	for (; scanf_s("%d ###", &d[j]);++j)
	{
		//将数据个数也放进数组，如果j大于数据个数，则输出索引i中数据库的值
		//如果j-1等于数据个数，那么可以将前面的数据排序
		if (j - 1 > *d)
			cout << d[d[j]] << endl;
		else
			j - 1 - *d ? 1 : qsort(d+1,*d,4,cmp);
	}
	system("pause");
	return 0;
}