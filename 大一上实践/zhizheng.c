#include<stdio.h>
void printfString(char*str){
	while(*str!='\0'){
		printf("%c",*str);
		str++;	
	}
}
int main(){
	char*p="One Piece";
	printfString(p);
	printf("%c",*p);
	return 0;
}