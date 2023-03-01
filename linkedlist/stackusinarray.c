#include<stdio.h>
#include<stdlib.h>

struct stack1{
	int size;
	int top;
	int * arr;
};

int main(){
	struct stack1 s ;
	s.size=80;
	s.top=-1;
	s.arr=(int *)malloc(s.size*sizeof(int));
	
	
}

