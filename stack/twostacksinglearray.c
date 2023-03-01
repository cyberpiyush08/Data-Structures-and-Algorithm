 #include<stdio.h>
#define max 2

int top1=-1,top2=max,arr[max],a=1;
void push1(int n)
{
	if(top1<top2-1)
	{
		top1=top1+1;
		arr[top1]=n;
		
	}
	else
	{
		printf("stack is overflow");
		
	}
}
void push2(int n)
{
	if(top1<top2-1)
	{
		top2=top2-1;
		arr[top2]=n;
		
		
	}
}
void pop1()
{
	int remove;
	if(top1>=0)
	{
		remove=arr[top1];
		printf("\npoped element %d\n",remove);
		top1--;
		
	}
	else
	{
		printf("stack is underflow");
		
	}
}void pop2()
{
	int remove;
	if(top2<max)
	{
		remove=arr[top2];
		printf("\npoped element %d\n",remove);
		top2=top2+1;
		
	}
	else
	{
		printf("stack is underflow");
		
	}
}
int main()
{
	int input,n;
	do
	{
		
		printf("enter your choice \n1.push1\n2.push2\n3.pop1\n4.pop2\n5.end the program\n");
		scanf("%d",&input);
		printf("you have entered %d\n",input);
		switch(input)
		{
			case 1:
				printf("enter the element to be pushed in stack 1\n");
				scanf("%d",&n);
				push1(n);
				break;
				
			case 2:
				printf("enter the element to be pushed in stack 2\n");
				scanf("%d",&n);
				push2(n);
				break;
					
			case 3:
				pop1();
				break;
				
			case 4:pop2();
			break;
			
			case 5:
			a=2;
			break;
			
			
		}
	}while(a==1);
	return 0;
}

