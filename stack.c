#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack{
	int arr[MAX];
	int top;
}st;
void push();
void pop();
void disp();
int main()
{
st.top = -1;
int ch;
while(1){
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Display");
	printf("\n4.Exit");
	printf("\nEnter your choice (1-4): ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			push();
		break;
		case 2:
			pop();
		break;
		case 3:
			disp();
		break;
		case 4:
			exit(0);
		break;
		defult:
			printf("Invalid option!");
		break;
	}
}
return 0;
}
void push(){
int item;
	if(st.top == MAX-1){
		printf("\nStack is full!");
	}else{
		printf("\nEnter the value: ");
		scanf("%d",&item);
		st.top++;
		st.arr[st.top] = item;
	}
}
void disp(){
	int i;
	if(st.top == -1){
		printf("\nStack is empty!");
	}else{
		for(i=st.top;i>=0;i--){
			printf("%d\t",st.arr[i]);
		}
	}
}
void pop(){
	if(st.top == -1){
		printf("\nStack is empty");
	}else{
		int item;
		item = st.arr[st.top];
		st.top--;
		printf("\nPoped item is: %d",item);
	}
}
