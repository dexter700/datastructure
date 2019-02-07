#include<stdio.h>
int a[20][20],reach[20],n;
void dfs(int v){
	int i;
	reach[v]=1;
	for(i=1;i<=n;i++){
		if(a[v][i] == 1 && !reach[i]){
			printf("\n%d->%d",v,i);
			dfs(i);
		}
	}
}
void main(){
	int i,j,s,count=0;
	printf("Enter no of vertex: ");
	scanf("%d",&n);
	printf("Enter matrix: ");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the starting node : ");
	scanf("%d",&s);
	dfs(s);
	for(i=1;i<=n;i++){
		if(reach[i]){
			count++;
		}
		if(count == n){
			printf("Starting is connected to every node");
		}else{
			printf("starting node is not connected to any node");
		}
		
	}
}