/* all ssorting */
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int data[],int n){
	int j,i,temp;
    for(i=0;i<n-1;++i){
    	for(j=0;j<n-i-1;++j)
	    {
	        if(data[j]>data[j+1])   /* To sort in descending order, change > to < in this line. */
	        {
	            temp=data[j];
	            data[j]=data[j+1];
	            data[j+1]=temp;
	        }
	    }	
    }   
    printf("In ascending order: ");
    for(j=0;j<n;++j){
    	printf("%d\t",data[j]);	
    }
}
void insertion_sort(int a[],int n){
	int i,j,key;
	for (i=1;i<=n-1;i++) {
    	key = i;
	    while(key>0 && a[key-1]>a[key]) {
	      j = a[key];
	      a[key]=a[key-1];
	      a[key-1] = j;
	      key--;
	    }
  	}
  	for(i=0;i<n;i++){
  		printf("%d\t",a[i]);
  	}
	
}
void selection_sort(int a[],int n){
	int i,j,pos,temp;
	for (i=0; i<(n-1); i++){
   		pos=i;
    	for (j = i+1; j<n; j++){
      		if(a[pos] > a[j]){
      			pos = j;
      		}
    	}
	    if (pos!= i){
	      temp = a[i];
	      a[i] = a[pos];
	      a[pos] = temp;
	    }
  }//i for loop ends
}
int main(){
	int a[20],i,n,ch;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(1){
		printf("\n1.Bubble sort\n2.Insertion Sort\n3.Selection sort\n4.Exit");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				bubble_sort(a,n);
			break;
			case 2:
				insertion_sort(a,n);
			break;
			case 3:
				selection_sort(a,n);
			break;
			case 4:
				exit(0);
			break;
		}
	}
	return 0;
}
