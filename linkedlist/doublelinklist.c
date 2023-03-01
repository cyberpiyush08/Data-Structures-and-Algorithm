#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *prev;
struct node *next;

};

void linkedList(struct node *head)
{
	struct node *ptr=head;
	struct node *q;
	printf("forward\n");
	do{
		printf("\n%d",ptr->data);
		q=ptr;
		ptr=ptr->next;
	}while(ptr!=NULL);
	
	printf("\nreverse\n");
	
	do{
		printf("\n%d",q->data);
		q=q->prev;
		
	}while(q!=NULL);
	
}

int main(){
	struct node *head,*second,*third,*fourth;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	
	
	head->next=second;
	head->prev=NULL;
	head->data=1;

	second->next=third;
	second->prev=head;
	second->data=2;
	
	third->next=fourth;
	third->prev=second;
	third->data=3;
	
	fourth->next=NULL;
	fourth->prev=third;
	fourth->data=4;
	
	linkedList(head);
	
}
