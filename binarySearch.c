#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x); 
int main() 
{ 
int n,i,key,a[100],result;
   	
printf("\nHow many numbers");
	scanf("%d",&n); 
	printf("\nEnter the numbers");
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element you want to search");
	scanf("%d",&key);
	
   result = binarySearch(a, 0, n-1, key); 
   if(result == -1){
	printf("Element is not present in array\n");
   }else{
	printf("Element is present at index %d\n", result);
   } 
   return 0; 
}
int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
        if (arr[mid] == x)  return mid; 
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x); 
        return binarySearch(arr, mid+1, r, x); 
   } 
   return -1; 
} 

