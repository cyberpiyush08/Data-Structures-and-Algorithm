#include<stdio.h>
#include<stdlib.h>
//intializing the structure by taking the value as data and pointer next for poining to next node 
struct node{
	
	int data; 
	struct node *next;  //sele referencing structure /////////gate smashers//////////////
	
};


// for traversing the elements 
void linkedList(struct node* ptr){
	while(ptr!=NULL){
		printf("\nelements are %d  ",ptr->data);
		ptr=ptr->next;
	}
}

int main(){
	int n;
	struct node * head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	printf(" enter the fisrt element \n:");
	scanf("%d",&n);
	head->data=n;
	head->next=second;
	
	second->data=8;
	second->next=third;
	
	third->data=9;
	third->next=fourth;
	
	fourth->data=11;
	fourth->next=NULL;
	
	linkedList(head);
}

