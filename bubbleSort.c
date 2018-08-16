#include<stdio.h>
#include<conio.h>
int main(){
	int a[] = {2,5,90,50,3};
	int i;
	bubbleSort(a,5);
	for(i=0;i<=4;i++){
		printf("%d ",a[i]);
	}
}
void bubbleSort(int a[],int n){
	int round,temp,i;
	for(round=1;round<=n-1;round++){
		for(i=0;i<=n-1-round;i++){
			if(a[i]>a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
}
