  #include<stdio.h>
#include<string.h>

char stack[50];
int top=-1;

void push(char c){
	top=top+1;
	stack[top]=c;
	printf("%c\n",c);
}

void pop(){
	char c;
	c=stack[top];
	top--;
	printf("%c",c);
}

void main(){
	int len,i;
	char str[30];
	printf("\nenter the string \n");
	scanf("%s",str);
	
	len =strlen(str);
	printf("length of the string is %d  ",len);
	
	
	for(i=0;i<len;i++){
		
		push(str[i]);

	}
	
	printf("\nreverse a string\n");
	for(i=0;i<len;i++){
		pop();
	}
}
