/* code by Sumanta Sharma */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int arr[100],top=-1,size;
bool isFull();
bool isEmpty();
void push();
void pop();
void display();
void peek();
void peep();
int main(){
    int ch;
    printf("\nEnter Stack size (1-100) : ");
    scanf("%d",&size);
    while(1){
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.DISPLAY");
        printf("\n4.PEEK");
        printf("\n5.PEEP");
        printf("\n6.Exit");
        printf("\nEnter any option(1-6): ");
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
                exit(0);
            break;
        }
    }
}
bool isFull(){
    if(top == size-1){
        return true;
    }else{
        return false;
    }
        
}
bool isEmpty(){
    if(top<0){
        return true;
    }else{
        return false;
    }
}

void push(){
    int element;
    if(isFull() == true){
        printf("\nStack is full, hence can not be inserted!\n\n");
    }else{
        printf("\nEnter the element you want to insert: ");
        scanf("%d",&element);
        ++top;
        arr[top] = element;
        printf("\nElement %d inserted at the location %d",element,top);
    }
}
void display(){
    int i;
    if(isEmpty() == true){
        printf("\nStack is empty!");
    }else{
        for(i=top;i>=0;i--){
        printf("%d\t",arr[i]);
        }
    }    
}
void pop(){
    if(isEmpty() == true){
        printf("\nStack is empty, nothing to pop");
    }else{
        printf("\nPoped element is %d from location %d",arr[top],top);
        --top;
    }
}
void peek(){
    printf("\nPeek Element is %d",arr[top]);
}
void peep(){
    int index;
    printf("\nEnter the index: ");
    scanf("%d",&index);
    printf("\nElement at the index %d is %d",index,arr[index]);
}
