
#include<stdio.h>
#include<stdlib.h>
//intializing the structure by taking the value as data and pointer next for poining to next node 
struct node{
	
	int data;    
	struct node *next;
	
};


// for traversing the elements 
void linkedList(struct node* ptr){
	while(ptr!=NULL){
		printf("\nelements are %d",ptr->data);
		ptr=ptr->next;
	}
}

struct node * reverseList(struct node *head){
	struct node *prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
		
	}
	printf("%d",prevnode);
	head=prevnode;
}


int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	
	head->data=7;
	head->next=second;
	
	second->data=8;
	second->next=third;
	
	third->data=9;
	third->next=fourth;
	
	fourth->data=11;
	fourth->next=NULL;
	
	linkedList(head);
	
	printf("\n%d %d %d %d\n",head,second,third,fourth);
	
	printf("\n\nafter reversing the linked list\n");
	head=reverseList(head);
	linkedList(head);
	 
	
	
	return 0;
	
}

