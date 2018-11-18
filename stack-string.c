/* Code by: Sumanta Sharma */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
char stack[50][50];
int top=-1,size;
void push();
void pop();
void display();
void peek();
void peep();
void update();
bool isEmpty();
bool isFull();
int main(){
	int ch;
	printf("\nEnter the stack size: ");
	scanf("%d",&size);
	while(1){
		printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Peep\n6.Update\n7.Exit");
		printf("Enter your cchoice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
			break;
			case 2:
				pop();
			break;
			case 3:
				display();
			break;
			case 4:
				peek();
			break;
			case 5:
				peep();
			break;
			case 6:
				update();
			break;
			case 7:
				exit(0);
			break;
		}
	}

}
bool isFull(){
	if(size == top){
		return true;
	}else{
		return false;
	}
}
bool ifEmpty(){
	if(top == -1){
		return true;
	}else{
		return false;
	}
}
void push(){
	char str[50];
	if(isFull()){
		printf("\nStack is Full");
	}else{
		printf("\nEnter The string: ");
		scanf("%s",str);
		top++;
		strcpy(stack[top],str);
		printf("\nString pushed to stack");
	}
}
void pop(){
	printf("\nPoped item is %s",stack[top]);
	--top;
}
void peek(){
	printf("\nTop lement is: %s",stack[top]);
}
void peep(){
	int index;
	printf("\nEnter index: ");
	scanf("%d",&index);
	printf("\nElement is: %s",stack[index]);
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%s\t",stack[i]);
	}
}
void update(){
	char str[50];
	int i;
	printf("\nEnter the index which you want to update: ");
	scanf("%d",&i);
	printf("\nValue at index %d is %s",i,stack[i]);
	printf("\nEnter the new string: ");
	scanf("%s",str);
	strcpy(stack[i],str);
	printf("\nUpdated");
}
