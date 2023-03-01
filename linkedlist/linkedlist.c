`	   
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

// code for insertiion of node at the beginning 
 
struct node* insertFirst(struct node *head,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->next=head; 
	ptr->data=data;
	
	return ptr;
}


// code for inserting nofe at the end of the node
struct node * insertEnd(struct node* head,int data){
	struct node*ptr=(struct node* )malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=head;
	
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr ;
	ptr->next=NULL;
	return head;
};


//inserting the node after the particular node 
struct node * insertAfterNode (struct node *head, struct node *prevnode,int data ){
	struct node * ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}


// entering the node at specific index
struct node * insertIndex(struct node *head,int data,int index){
	 struct node *ptr=(struct node*)malloc(sizeof(struct node));
	 struct node *p=head;
	 int i=0;
	 while(i<index-1){
	 	p=p->next;
	 	printf("\n%d  %d \n",p,p->next);
	 	i++;
	 }
	 ptr->data=data;
	 ptr->next=p->next;
	 p->next=ptr;
	 return head;
}


////////////////////////////////////////////////DELETION OPERATION ///////////////////////////////////////////

//// to delete the start node 
struct node *deleteBegin(struct node * head){
	struct node *ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

//deletion at node at specific index

struct node * deleteInd(struct node *head,int index){
	struct node *p=head;
//	struct node *q=head->next;
//	int i=0;
	printf("hii1");
	int i=0;
	while(i<index-1){
		p=p->next;
	//	q=q->next; 
		i++;
	}
	printf("hii2");
	
	struct node *q=p->next;
	p->next=q->next;
	free(q);
	return head;
	printf("hii");
	
	
}

// deleting the node at the end 

struct node * deleteEnd(struct node *head){
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
//	struct node *p=q;
	p->next=NULL;
	free(q);
	return head;
}

// deleting the  node with specific value

struct node * deleteVal(struct node *head,int value){
	struct node *p=head;
	struct node *q=head->next;
	
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}   
	
	if(q->data==value){
		p->next=q->next;
		free(q);
		
	}
	return head;
}
// here the linked is been sorted 


struct node * sort(struct node *head){
	struct node *i=head,*j;
//	printf("%d",i->data);
	int temp;
	//printf("hii");
	
	for(i=head;i->next!=NULL;i=i->next){
		
		for(j=i->next;j!=NULL;j=j->next	){
			printf("%d\n",j->data);
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
//	printf("hii");
	 
	 printf("traversal of the linked list\n\n");
	linkedList(head);
	printf("\n\n\nafter insertion\n\n\n");
//	sort();
//	head=insertFirst(head,55);
//	linkedList(head);
	//printf("sorthing0");
	//sort();

//head=insertIndex(head,69,3);	
//linkedList(head);

//head=insertEnd(head,24);
//linkedList(head);

//head=insertAfterNode(head,third,25);
//linkedList(head);

//head=deleteBegin(head);
//linkedList(head);


//head=deleteInd (head,2);
//linkedList(head);

//head=deleteEnd(head);
//linkedList(head);

//head=deleteVal(head,8);
//linkedList(head);
printf("\n");
//sorthing function is benn called here
//printf("\n\nsorthing the linked list");
head=sort(head);

linkedList(head);	
	
	
	return 0;
	
}

