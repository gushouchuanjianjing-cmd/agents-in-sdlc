#include<stdio.h>
int main(){
	int arr[5]={12,45,7,89,23};
	int*p=arr;
	int max=*p;
	for(int i=1;i<5;i++){
		p++;
		if(*p>max){
			max=*p;
		}
	}
	printf("最大的数：%d\n",max);
	return 0;
} 