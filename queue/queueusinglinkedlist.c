#include<stdio.h>
#include<stdlib.h>

struct node *f=NULL;
struct node *r=NULL;

struct node{
	int data;
	struct node * next;
};
void linkedlist(struct node *ptr){
	
	printf("linked list traversal\n");
	while(ptr!=NULL){
		printf("element :%d\n",ptr->data);
		ptr=ptr->next;
	}
}

void enqueue(int val){
	
	struct node *n=(struct node*)malloc(sizeof(struct node));
	//printf("inside enqueue operation\n");
	if(n==NULL){
		printf("queue is full\n\n");
	}
	else{
		n->data=val;
		n->next=NULL;
		
		if(f==NULL){
			f=r=n;
		}
		else{
		r->next=n;
		r=n;
		}
		
	}
	
}

int dequeue(){
	int val=-1;
	struct node *ptr=f;
	
	if(f==NULL){
		printf("queue is empty\n");
		
	}
	else{
		f=f->next;
		val=ptr->data;
		free(ptr);
		
	}
	return val;
}

	
int main(){
	
	linkedlist(f);
	
	printf("dequeuing the element %d\n",dequeue());
	enqueue(20);
	enqueue(2);
	enqueue(16);
	enqueue(17);
	
	
	linkedlist(f);
	printf("dequeuing the element %d\n after deletion the elements are :\n",dequeue());
	linkedlist(f);
	
	
	return 0;
}
