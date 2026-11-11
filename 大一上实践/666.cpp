#include<stdio.h>
int multiply(int a,int b)
{
	int c=a*b;
	return c;
}
int main()
{
	int mul=multiply(5,5);
	printf("结果是：%d",mul);
	return 0;
}