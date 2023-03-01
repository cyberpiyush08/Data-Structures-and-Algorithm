   
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
		printf("%d----->",ptr->data);
		
		ptr=ptr->next;
		//printf("%d",ptr->data);
	}
}


// here the linked is been sorted 


struct node * sort(struct node *head){
	struct node *i=head,*j;
//	printf("%d",i->data);
	int temp;
	//printf("hii");
	
	for(i=head;i->next!=NULL;i=i->next){
		
		for(j=i->next;j!=NULL;j=j->next	){
			
			if(i->data > j->data){
				
				temp=i->data;
				i->data=j->data;
				j->data=temp;
				
			}
		}
		
	}
	return head;
}

int main(){
	int n;
	struct node *head;
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
	
	third->data=7;
	third->next=fourth;
	
	fourth->data=11;
	fourth->next=NULL;
	 
	 printf("traversal of the linked list\n\n");
	linkedList(head);
	printf("\n\n\nafter insertion\n\n\n");
printf("\n");
//sorthing function is benn called here
//printf("\n\nsorthing the linked list");
head=sort(head);

linkedList(head);	
	
	
	return 0;
	
}

