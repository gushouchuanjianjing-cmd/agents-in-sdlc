#include<stdio.h>
#include<string.h>
void myStrlen(char*str,int*a){
	int count=0;
	while(*str!='\0'){
		count++;
		str++;
	}
	*a=count;
}
int main(){
	char*p="One Piece";	
	int len=0;
	myStrlen(p,&len);
	printf("%d\n",len);
	return 0;
}