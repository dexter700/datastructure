#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createBST(struct node*,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
int main(){
	struct node *root=NULL;
	int ch,n,i,item;
	while(1){
		printf("\n1.Create BST \n2.In-Order \n3.Pre-Order \n4.Post-Order \n5.Exit");
		scanf("%d",&ch);
		switch(ch){
			case 1:
			//root=NULL;
				printf("How many nodes: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Enter the node data: ");
					scanf("%d",&item);
					root=createBST(root,item);
				}
				printf("BST with %d node created!",n);
			break;
			case 2:
				printf("In-Order");
				inorder(root);
			break;
			case 3:
				printf("Pre order");
				preorder(root);
			break;
			case 4:
				printf("Post order");
				postorder(root);
			break;
			case 5:
				exit(0);
			break;
		}
	}
	return 0;
}
struct node *createBST(struct node *root, int item){
	if(root == NULL){
		root =(struct node*)malloc(sizeof(struct node*));
		root->left=NULL;
		root->right=NULL;
		root->data=item;
		return root;
	}else{
		if(item<root->data){
			root->left=createBST(root->left,item);
		}else if(item>root->data){
			root->right=createBST(root->right,item);
		}else{
			printf("Duplicate element!");
		}
		return root;
	}
}
void inorder(struct	node *root){
	if(root !=NULL){
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root){
	if(root !=NULL){
		printf("%d",root->data);
		inorder(root->left);
		inorder(root->right);
	}
}
void postorder(struct node *root){
	if(root !=NULL){
		inorder(root->left);
		inorder(root->right);
		printf("%d",root->data);
	}
}