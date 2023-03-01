#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
	int size;
	int f;
	int r;
	int *arr;
};
int isempty(struct circularqueue *q){
	if(q->f==q->r){
		return 1;
	}
	else{
		return 0;
	}
}

int isfull(struct circularqueue *q){
	if((q->r+1)%q->size == q->f){		
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(struct circularqueue *q,int val){
	if(isfull(q)){
		printf("circularqueue is full\n");
	}
	else{
		q->r=(q->r+1)%q->size;
		q->arr[q->r]=val;
		printf("the enqueue element is %d\n\n",val);
	}
}

int dequeue(struct circularqueue *q){
	int val=-1;
	if(isempty(q)){
		printf("circular queue is empty\n");
		
	}
	else{
		q->f=(q->f+1)%q->size;
		val=q->arr[q->f];
		printf("the dequeue element is %d\n\n",val);
		
	}
	return val;
}

int main(){
	struct circularqueue q;
	q.size=4;
	q.f=q.r=0;
	q.arr=(int *)malloc(q.size*sizeof(int));
	
	enqueue(&q,16);
	enqueue(&q,17);
	enqueue(&q,18);
	enqueue(&q,19);
	
	dequeue(&q);
	enqueue(&q,20);
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
	dequeue(&q);
	

	
		
	
}
