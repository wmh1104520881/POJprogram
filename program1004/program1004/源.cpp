//poj program 1004

#include<stdio.h>

float i, c;    //i为输入，c为12个月总数
int main()
{
	for (; ~scanf_s("%f", &i);)
		c += i;
	printf("$%.2f", c / 12);
}