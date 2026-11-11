#include<stdio.h>
int huiwen(int a,int b){
	int c;
	while(c=a%b){
		a=b;
		b=c;
	}
	return b;
}
int main(){
	int m,n,g,l;
	printf("请输入两个整数，中间用逗号隔开：");
	scanf("%d,%d",&m,&n);
	g=huiwen(m,n);
	l=m*n/g;
	printf("最大公因数为：%d\n",g);
	printf("最小公倍数为：%d\n",l);
	return 0;
}