#include<stdio.h>
int main(){
	for(int i=1;i<10;i++){
		for(int j=1;j<=i;j++){
			int a;
			a=j*i;
			printf("%d*%d=%d	",i,j,a);
		}
		printf("\n");
	}
	return 0;
}