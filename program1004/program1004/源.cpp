//poj program 1004

#include<stdio.h>

float i, c;    //iΪ���룬cΪ12��������
int main()
{
	for (; ~scanf_s("%f", &i);)
		c += i;
	printf("$%.2f", c / 12);
}