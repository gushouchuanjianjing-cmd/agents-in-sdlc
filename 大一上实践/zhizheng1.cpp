#include<stdio.h>
int main(){
	int arr[3]={10,20,30};
	int*p=arr;
	printf("p的地址：%p\n",p);
	printf("arr[0]的地址：%p\n",&arr[0]);
	printf("第一个数：%d\n",*p);
	printf("第二个数：%d\n",*(p+1));
	printf("第三个数：%d\n",*(p+2));
	return 0;
}