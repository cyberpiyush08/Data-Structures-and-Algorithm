//NAME=PIYUSH JAIN ROLL NO=A344

#include<stdio.h>
#define max 10
struct stack
{
	int st[max];
	int top;
	int size;	
};
void push(struct stack *s,int n)
{
   if(s->top+1==max)
	{
		printf("stack is overflow");	
	}
	else
	{
	  s->st[++(s->top)]=n;
	}
}
int pop(struct stack *s)
{
		if(s->top==-1)
			{
		printf("stack is empty");
		}
	else
	{
	   return s->st[(s->top)--];
	}
}
void main()
{
 struct stack s1,s2;
  printf("NAME:PIYUSH ROLL NO:A344\n");
 int num,rev=0;
 s1.top=-1;
 s2.top=-1;
 printf("enter a number:");
 scanf("%d",&num);
 while(num!=0)
 {
 	push(&s1,num%10);
 	
 		num/=10;
}
 while(s1.top!=-1)
 {
 	push(&s2,pop(&s1));
}
 while(s2.top!=-1)
 {
 	rev=rev*10 +pop(&s2);
 }
 printf("reverse number :%d",rev);
}


	
