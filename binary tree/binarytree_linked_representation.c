// in this program you will get inorder,postorder,preorder traversal and height of the binary tree
// in this code we have use recursive functions

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<math.h>

//structure has been defined
struct node{
	int data;
	struct node* left;
	struct node* right;
};

// function has been created to for creting a binary tree
struct node* createNode(int data){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
} 

//// preorder traversal root->left->right  

struct node * preorder(struct node *root){
	if(root!=NULL){
		printf(" %d",root->data);
		//printf("a");
		preorder(root->left);
		//printf("b");
		preorder(root->right);
		//printf("c");
		
	}
}

// postorder traversal  left->right->root

struct node* postorder(struct node *root){
	if(root!=NULL){
		//printf("a");
		postorder(root->left);
		//printf("b");
		postorder(root->right);
		//printf("c");   
		printf("%d ",root->data);
	}
}

// Inorder traversal left->root->right
struct node* inorder(struct node* root){
	if(root!=NULL){
		//printf("a");  
		inorder(root->left);
		//printf("b");
		printf("%d ",root->data);
		//printf("c");
		inorder(root->right);
		
	}
}

// to get the height of the binary tree

int getHeight(struct node* root) {
   
    if (!root)
        return -1;
    else {
        
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        if (left >= right)
            return left + 1;
        else
            return right + 1;
    }
}


int main()
{		//old way of assignning the values without funnction
	/*
	struct node *p;
	struct node *p1;
	struct node *p2;
	
	p=(struct node *)malloc(sizeof(struct node));
	p1=(struct node *)malloc(sizeof(struct node));
	p2=(struct node *)malloc(sizeof(struct node));
	p->data=2;
	p->left=p1;
	p->right=p2;
	p1->left=NULL;
	p1->right=NULL;
	p1->left=NULL;
	p1->right=NULL;
	
	*/
	
	// now we will assign the values with the help of createNode() function
	struct node *p=createNode(4);
	struct node *p1=createNode(1);
	struct node *p2=createNode(6);
	struct node *p3=createNode(5);
	struct node *p4=createNode(2);
	//struct node *p5=createNode(11);
	//struct node *p6=createNode(3);
	//linking the root node in the tree to its left and right nodes
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	//p3->left=p5;
	//p3->right=p6;
	printf("\nthe preorder is \n");
	preorder(p);

	printf("\n\nthe postorder is \n");
	postorder(p);
	printf("\n\n\n print inoreder \n");
	inorder(p);

	printf("\n\n\nheight of the tree : ");
	printf("%d",getHeight(p));

	
	
	return 0;
}
