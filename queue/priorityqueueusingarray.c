  #include<stdio.h>
#include<stdlib.h>

int isempty();
int isfull();
void insert(int ,int );
int gethighestpriority();
int deletehighestpriority();
void display();


struct prqueue{
	int ele;
	int pri;
}pq[5];
int rear=-1;

int main(){
	
	int ch,p,ele;
	do{
		printf("\n1.insert\n2.gethighestpriority\n3.deletehighestpriority\n4.display\n5.exit");
		printf("\nenter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			
		
			case 1:
				if(isfull()){
					printf("queue is full\n");
					
				}
				else{
					printf("enter element to insert \n");
					scanf("%d",&ele);
					printf("\n enter priority:\n");
					scanf("%d",&p);
					insert(ele,p);
				}
				break;
				
			case 2:
				if(isempty()){
					printf("queue is empty\n");
					
				}
				else{
					p=gethighestpriority();
					printf("\n highest priority =%d",p);
				}
				break;
				
			case 3:
				if(isempty()){
					printf("queue is empty\n");
					
				}
				else{
					ele=deletehighestpriority();
					printf("\n %d is deleted",ele);
				}
				
				break;
				
			case 4:
				if(isempty()){
					printf("queue is empty\n");
					
				}
				else{
					display();
				}
				
				break;
			
		}
	}while(ch!=5);
}

int isempty(){
	if(rear==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isfull(){
	if(rear==4){
		return 1;
	}
	else{
		return 0;
	}
	
}
void insert(int ele,int p){
	rear=rear+1;
	pq[rear].ele=ele;
	pq[rear].pri=p;
	
}
int gethighestpriority(){
	
	int i,p=-1;
	
	if(!isempty()){
		
		for(i=0;i<=rear;i++){
			
			if(pq[i].pri>p){
				
				p=pq[i].pri;
			}		
		}
	}
	return p;
}

int deletehighestpriority(){
	
	int i,j,p,ele;
	p=gethighestpriority();
	for(i=0;i<=rear;i++){
		printf("rear is :%d",rear);
		if(pq[i].pri==p){
			ele=pq[i].ele;
			break;
		}
	}
	if(i<rear){
		printf("the value of i is %d\n",i);
		  for(j=i;j<rear;j++){
			printf("hii im inside i<rear condition\n");
			pq[j].ele=pq[j+1].ele;
			pq[j].pri=pq[j+1].pri;
			
		}
	}
	rear=rear-1;
	return ele;	
}

void display(){
	int i;
	printf("\npriority queue =");
	for(i=0;i<=rear;i++){
		printf("element =%d - priority= %d\n",pq[i].ele,pq[i].pri);
	}
}


