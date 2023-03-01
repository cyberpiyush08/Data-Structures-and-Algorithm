#include<stdio.h>
#iclude<stdlib.h>

struct stack{
	int size;
	int top;
	char *arr;
};

int isempty(struct stack *ptr){
	
	if(ptr->top==-1){
		return 1;
		
	}
	else{
		return 0;
	}
}
int isfull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int parenthesis(char *exp){
	struct stack *sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc(sizeof(char));
	
	for(int i=0;exp[i]!='\0';i++){
		
		if(exp[i]=='('){
			push(  )
		}
		else if(exp[i]==')'){
			
		}
	}
	if(isempty(sp)){
		return 1;
	}
	else{
		return 0;
	}
}




