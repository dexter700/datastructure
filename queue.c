#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int arr[100],front=0,rear=0,size;
bool isFull();
bool isEmpty();
void insert();
void display();
void delete();

int main(){
    int ch;
    printf("\nEnter size of the queue: ");
    scanf("%d",&size);
    while(1){
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit\n\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nInvalid option");
                break;
        }
    }
}
bool isFull(){
    if(rear == size){
        return true; 
    }else{
        return false;
    }
}
bool isEmpty(){
    if(rear == front){
        return true;
    }else{
        return false;
    }
}
void insert(){
    int element;
    if(isFull() == true){
        printf("\nQueue is full!");
    }else{
        printf("\nEnter the element: ");
        scanf("%d",&element);
        arr[rear] = element;
        printf("\nElement %d inserted at location %d",element,rear);
        ++rear;
    }
}
void display(){
    int i;
    for(i=front;i<rear;i++){
        printf("%d\t",arr[i]);
    }
}
void delete(){
    int i;
   if(isEmpty() == true){
       printf("\nQueue is empty");
   }else{
       printf("\nDeleted item is: %d",arr[front]);
       for(i=0;i<rear-1;i++){
           arr[i] = arr[i+1];
       }
       --rear;
   }
}
