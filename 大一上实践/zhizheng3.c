#include<stdio.h>
int main(){
	int arr[6]={45,12,89,23,89,7};
	int*p=arr;
	int max=*p;
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+*(p+i);
		if(*(p+i)>max){
			max=*(p+i);
		}
	}
	printf("sum=%d\n",sum);
	printf("max=%d\n",max);
}