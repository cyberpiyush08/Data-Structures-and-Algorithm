#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};
struct node *top=NULL;

void linkedList(struct node *top){
	struct node *ptr=top;
	while(ptr!=NULL){
		printf("the element is %d \n",ptr->data);
		ptr=ptr->next;
	}
}
// to check if the stack is empty or not
struct node * isEmpty(struct node *top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

//to check if the stack is full or not
struct node *isFull(struct node *top){
	struct node *p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL){
		return 1;
		
	}
	else{
		return 0;
	}
}


// to push the element into the stack
struct node *push(struct node *top,int x){
	if(isFull(top)){
		printf("stack iis overflow\n");
	}
	else{
		struct node *n=(struct node*)malloc(sizeof(struct node));
		n->data=x;
		n->next=top;
		top=n;
		return top;
	}
}

//to pop the element from the stack

	int pop(struct node *tp){
	if(isEmpty(tp)){
		printf("stack is underflow\n");		
	}
	else{
		struct node *p=tp;
		int x=p->data;
		top=tp->next;
		 
		free(p);
		printf("\nthe element deleted is : %d\n",x);
	}
}
   int peek(int pos){
   	struct node* ptr=top;
   	int i;
   	for(i=0;(i<pos-1 && ptr!=NULL);i++){
   		ptr=ptr->next;
	   }
	   if(ptr!=NULL){
	   //	printf("the element is %d\n",ptr->data);
	   return ptr->data;
	   }
	   else{
	   	return -1;
	   }
   }
   
   int stacktop(){
   	return top->data;
   }  

int main(){
	
	top=push(top,7);
	top=push(top,14);
	top=push(top,72);
	top=push(top,17);
	
	linkedList(top);
	
	pop(top);
	linkedList(top);
	pop(top);
	linkedList(top);
	
	
	printf("\nthe value at the peek is %d\n",peek(2));
	printf("\nthe top element is %d",stacktop());
	return 0;
	
}
