//code with harry 

#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

 int ismatch(char a,char b){
 	if(a=='(' && b==')'){
 		return 1;
	 }
	 if(a=='[' && b==']'){
 		return 1;
	 }
	 if(a=='{' && b=='}'){
 		return 1;
	 }
	 return 0;
 }
 
int parenthesisMatch(char * exp){
	int i;
    // Create and initialize the stack
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    
    char poped;
 
 
    for ( i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp, exp[i]);
        }
        else if(exp[i]==')'  ||exp[i]==']'  ||exp[i]=='}' )
        {
		
            if(isEmpty(sp)){
                return 0;
            }
           poped= pop(sp);
		   if(!ismatch(poped,exp[i])){
		   		return 0;
		   } 
        }
    }
    
 
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    char * exp = "[4-6]((8){(9-8)})";
    // Check if stack is empty
    printf("hii\n");
    if(parenthesisMatch(exp)){
        printf("The parenthesis is balanced");
    }
    else{
        printf("The parenthesis is not balanced");
    }
    return 0;
}

