#include<stdio.h>
int main(){
	int treasure=100;
	int*p=&treasure;
	printf("宝藏的值是：%d\n",treasure);
	printf("宝藏图的坐标是：%p\n",p);
	printf("顺着藏宝图挖出来的宝藏：%d\n",*p);
	*p=999;
	printf("修改后，treasure变成了:%d\n",treasure);
	return 0;
}