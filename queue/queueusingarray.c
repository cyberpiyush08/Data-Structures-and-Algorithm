  #include<stdio.h>
#include<stdlib.h>

struct queue {
	int size;
	int f;
	int r;
	int * arr;
	
};

int isfull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isempty(struct queue *q){
	if(q->f==q->r)
	{
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(struct queue *q,int val){
	if(isfull(q)){
		printf("the queue is full\n");
	}
	else{
		q->r++;
		q->arr[q->r]=val;
		
	}
}

int dequeue(struct queue *q){
	int a=-1;                            // here 
	if(isempty(q)){
		printf("queue is underflow\n\n");
	}
	else{
		q->f++;
		a=q->arr[q->f];
		
	}
	return a;     // if the queue is empty a will  return -1, bcoz a=-1 is given above 
	
}

int main(){
	struct queue q;
	q.size=3;
	q.f=q.r=-1;
	q.arr=(int *)malloc(q.size*sizeof(int));
	
	enqueue(&q,24);
	enqueue(&q,25);
	enqueue(&q,26);

	printf("dequeueig the element %d\n",dequeue(&q));
//	printf("dequeueig the element %d\n",dequeue(&q));
	//printf("dequeueig the element %d",dequeue(&q));
	
	
	enqueue(&q,27); //here in this case size=3 and we have alredy inserted 3 elements above  but after dequeing 1 element it will only show que is full bcoz p=r;\
	
	
	
	return 0;
	
}
