 #include<stdio.h>
 #include<stdlib.h>
 
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

void push(struct stack *ptr,int val){
	if(isfull(ptr)){
		printf("the stack is full");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
	
}

char pop(struct stack *ptr){
	if(isempty(ptr)){
		printf("the stack is underflow");
		
	}
	else{
		char val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}

int parenthesis(char * exp){
	int i;
	struct stack *sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc(sp->size * sizeof(char));
	
	for(i=0;exp[i]!='\0';i++){
		
		if(exp[i]=='('){
			push(sp,'(');
		}
		
		else if(exp[i]==')'){
			if(isempty(sp)){
				return 0;
			}
			pop(sp);
		}
	}
	if(isempty(sp)){
		return 1;
		
	}
	else{
		return 0;
	}
}

int main(){
	 
	 char * exp="((8)(*--$$9))";  
	// exp="((a)";   // parenthesis not matching 
	   printf("hii\n");
	 if(parenthesis(exp)){
	 	printf("the parenthesis is matching ");
	 }
	 else{
	 	printf(" the parentheis is not matching");
	 }
	 return 0;
	
}
