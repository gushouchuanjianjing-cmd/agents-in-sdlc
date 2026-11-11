#include<stdio.h>
void swapElements(int*arr,int index1,int index2){
	int temp=*(arr+index1);
	*(arr+index1)=*(arr+index2);
	*(arr+index2)=temp;
}
int main(){
	int arr[3]={100,200,300};
	swapElements(arr,0,2);
	printf("arr0=%d,arr2=%d\n",arr[0],arr[2]);
}