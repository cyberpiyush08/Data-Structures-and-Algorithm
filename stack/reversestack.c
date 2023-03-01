// Write a program to reverse the number using Stack ADT. 
 #include<stdio.h>
#define MAX 10
struct stack{
	int st[MAX];
	int top;
}s;
void push(struct stack *s,int n);
void pop();

void push(struct stack *s,int n)
{
	if(s->top==(MAX-1))
	printf("Stack overflow\n");
	
	else
	{
	  s->st[++(s->top)]=n;
	}
			
}
	void pop()
{
	
	if (s.top==-1)
	{
		printf("The stack is empty!");
	}
	else
	{
		printf("element %d has been removed", s->st[top]);
		top--;
	}
}  
void reverse()
{
	int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    

}
void main()
{
	int top=-1;

		push(st[i]);


	
}

