#include<stdio.h>

#define max 5

int top=-1;
struct stack{
	int st[max];
}s;

void push();
void pop();
void peek();
void isfull();
void display();
void main(){
	
	int ch;
	do{
		printf("enter the nuber of your choice \n1.push\n2.pop\n3.peek\n4.display\n");
		scanf("\n%d",&ch);
		printf("you have enterd the choioce %d\n",ch);
		switch(ch){
			case 1:push();
					break;
			case 2:pop();
					break;
					
			case 3: peek();
					break;
			case 4:display();
					
			default: printf("invalid choivce");
		}
	}while(ch!=5);
					
	}
	
	void push(){
		if(top==(max-1)){
			printf("stack is overflow");
			
		}
		
		else{
			top++;
			int i;
			printf("\nenter the element tio be isnerted: ");
			scanf("%d",&i);
			s.st[top]=i;
		}
	}
	
	void pop(){
		if(top==-1){
			printf("stack is underlow");
			
		}
		
		else{
			printf("\nthe number that will be removed will be :  %d",s.st[top]);
			top--;
		}
	}
	
	void peek(){
		printf("\nthe top element is : %d:",s.st[top]);
	}
	void display(){
		int n;
		for(n=top;n>=0;n--){
			printf("\nthe element is : %d\n",s.st[n]);
		}
	}
