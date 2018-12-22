/* this is linked list program - basic linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
void insert_first(){
	struct node *temp =(struct node*)malloc(sizeof(struct node)); //new node created!
	printf("Enter value for ist node: ");	
	scanf("%d",&temp->data);
	if(head == NULL){
		head=temp;
		temp->link=NULL;
	}else{
		temp->link=head;
		head=temp;
	}
}
void insert_last(){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&temp->data);
	if(head == NULL){
			printf("List is empty");
	}else{
		struct node *last;
		for(last=head;last->link!=NULL;last=last->link);
			last->link=temp;
			temp->link=NULL;
	}
}
void insert_inbetween(){
	int num;
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	struct node *prev;
	if(head == NULL){
		printf("\nLinked list is empty!");
	}else{
		printf("After which number you want to store: ");
		scanf("%d",&num);
		printf("Number you want to store: ");
		scanf("%d",&temp->data);
		for(prev=head;prev->data!=num;prev=prev->link);
			temp->link=prev->link;
			prev->link = temp;
	}
}
void delete_last(){
	struct node *temp,*temp1;
	if(head == NULL){
		printf(":inked list is empty!");
	}else if(head->link==NULL){
		free(head);
	}else{
		for(temp=head;temp->link->link!=NULL;temp=temp->link);
		temp1=temp->link;
		temp->link=NULL;
		free(temp1);
	}
	
}
void delete_first(){
	if(head == NULL){
		printf("Linked list is empty!");
	}else{
		struct node *temp;
		temp=head;
		head=head->link;
		free(temp);
	}
}
void delete_inbetween(){
	int num;
	if(head == NULL){
		printf("Linked list is empty!");
	}else{
		printf("Enter the number you want to delete: ");
		scanf("%d",&num);
		struct node *temp,*temp1;
		for(temp=head;temp->data!=num;temp=temp->link);
		temp1=temp->link;
		temp->link=temp1->link;
		free(temp1);
		
	}
}
void display(){
	struct node *temp;
	if(head == NULL){
		printf("Linked List is empty ! ");
	}else{
		for(temp=head;temp!=NULL;temp=temp->link){
			printf("Data: %d\tLink: %p\n",temp->data,temp->link);
		}
	}
}


int main(){
	int ch;
	while(1){
		printf("\n1.Create a node \n2.Display all nodes\n3.Insert at last \n4.Insert inbetween\n5.Delete last\n6.Delete first\n7.Delete inbetween\n\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert_first();
			break;
			case 2:
				display();
			break;
			case 3:
				insert_last();
			break;
			case 4:
				insert_inbetween();
			break;
			case 5:
				delete_last();
			break;
			case 6:
				delete_first();
			break;
			case 7:
				delete_inbetween();
			break;
		}
	}
	return 0;	
}
