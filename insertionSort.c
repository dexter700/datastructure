#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n);
int main(){
	int a[] = {31,44,65,23,76,1,55};
	int i;
	insertionsort(a,7);
	for(i=0;i<7;i++){
		printf("%d ",a[i]);
	}
	getch();
}
void insertionsort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp = a[i];
		for(j=i-1;j>=0&&temp<a[j];j--){
			a[j+1] = a[j];	
		}
		a[j+1] = temp;
	}
}
