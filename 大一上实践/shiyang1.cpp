#include<stdio.h>
int main(){
	printf("请输入你的成绩：");
	int a;
	scanf("%d",&a);
	if(a<0||a>100){
		printf("成绩无效\n");
	}
	else if(a>=0&&a<60){
		printf("E\n");
	}
	else{
	
	int s=a/10;
	switch(s){
		case 10:
			printf("A\n");
			break;
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
	}
	}
	return 0;
}