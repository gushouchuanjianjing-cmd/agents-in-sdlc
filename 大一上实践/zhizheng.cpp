#include<stdio.h>
int main(){
	int*p=NULL;
	if(p!=NULL){
		*p=500;
		printf("安全存入500\n");
		
	}else{
		printf("警告！当前是空指针（野指针），前方暗礁，禁止赋值！\n");
		
	}
	return 0;
}