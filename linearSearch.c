// program - linear search
#include<stdio.h>
int main(){
int i,n,a[50],key,flag=0,search=a[0];
printf("Enter no fo element: ");
scanf("%d",&n);
printf("Enter the elements followed by a space inbetween: ");
for(i=1;i<=n;i++){
 scanf("%d",&a[i]);
}
for(i=1;i<=n;i++){
 printf("%d\t",a[i]);
}
printf("Enter the element you want to search: ");
scanf("%d",&key);
for(i=1;i<=n;i++){
 if(key == a[i]){
    flag=1;
    printf("Element %d Found at position %d",key,i);
    break;
 }
}
if(flag == 0){
 printf("Element not found!");
}
return 0;
}
