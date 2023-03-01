#include <stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * next;
};

void linkedList(struct  node *head){
	
	struct node *ptr=head;
	
	printf("element is \n%d\n",ptr->data);
	ptr=ptr->next;
	do{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
		
	}while(ptr!=head);
} 


//  circular linkedlist first node insertion

struct  node * insertFirst(struct node *head,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	
	struct node *p=head;
	p=p->next;
	
	while(p->next!=head){
		p=p->next;
		
	}
	
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}

//  circular linkedlist last node insertion

struct  node * insertEnd(struct node *head,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=head->next;
	
	while(p->next !=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	return head;
}

//  circular linkedlist after particular node insertion

struct node * insertAfterNode (struct node *head, struct node *prevnode,int data ){
	struct node * ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}

//circular list addind node at particular index

struct node * insertIndex(struct node *head,int data,int index){
	 struct node *ptr=(struct node*)malloc(sizeof(struct node));
	 struct node *p=head;
	 int i=0;
	 while(i<index-1){
	 	p=p->next;
	 	i++;
	 }
	 ptr->data=data;
	 ptr->next=p->next;
	 
	 p->next=ptr;
	 return head;
}






int main(){
	
	struct node *head,*second,*third,*fourth;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	
	head->data=7;
	head->next=second;
	
	second->data=8;
	second->next=third;
	
	third->data=11;
	third->next=fourth;
	
	fourth->data=12;
	fourth->next=head;
	
	linkedList(head);
	printf("\nafter insertion \n\n");
	 
//	head=insertFirst(head,69);
//	linkedList(head);
	
	head=insertEnd(head,15);
	printf("end insertion\n");
	linkedList(head);
	
//	head=insertAfterNode(head,third,25);
//	linkedList(head);

//head=insertIndex(head,69,2);	
//linkedList(head);


	
	
	return 0;
}
