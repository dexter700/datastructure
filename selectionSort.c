#include<stdio.h>
#include<conio.h>
int main(){
	int a[] = {1,44,22,33,77,999,45,23,76,37};
	int loc,k,temp;
	for(k=0;k<=8;k++){
		loc = min(a,k,10);
		temp = a[k];
		a[k] = a[loc];
		a[loc] = temp;
	}
	for(k=0;k<=9;k++){
		printf("%d ",a[k]);
	}
	getch();
}
int min(int a[],int k,int n){
	int j,loc,min;
	min=a[k];
	loc = k;
	for(j=k+1;j<=n-1;j++){
		if(min>a[j]){
			min = a[j];
			loc = j;
		}
		return(loc);
	}
}
