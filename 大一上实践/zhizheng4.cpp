#include<stdio.h>
int main(){
	char*p="One Piece";
	printf("我要寻找的宝藏是：%s\n",p);
	printf("第一个字母是：%c\n",*p);
	printf("第二个字母是：%c\n",*(p+1)); 
	return 0;
}