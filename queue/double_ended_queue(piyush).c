#include<stdio.h>
#include<stdlib.h>

struct queue {
	int size;
	int front;
	int rear;
	int *arr;
};

int isempty(struct queue *q){
	if(q->front==q->rear){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(struct queue *q){
	if(q->rear==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueuer(struct queue *q,int val){
	
	if(isfull(q)){
		printf("the queue is full\n");
	}
	else{
		q->rear++;
		q->arr[q->rear]=val;
		printf("\nthe element  %d is inserted successfully at rear\n",val);
		
	}
}

void enqueuef(struct queue *q,int val){
	if(isfull(q) || q->front ==-1){
		printf("element cannot be inserted\n");
	}
	else{
		q->arr[q->front]=val;
		q->front --;
		printf("\nthe element  %d is inserted successfully at front",val);
	}
}
/*
int dequeuef(struct queue *q){
	int val=-1;
	if(isempty(q)){
		printf("the queue is empty\n");
	}
	else{
		q->front++;
		val=q->arr[q->front];
		return val;
			
	}
	//return val;
	
}
*/
int dequeuef(struct queue *q)
{
	int val=-1;
    if(isempty(q))
    {
        printf("There is no elemet in the Queue\n");
        //return -1;
    }
    else
    {
         q->front++;
          val=q->arr[q->front];
        //return val;
        
        printf("\nthe element %d is deleted from the front of the queue \n",val);

    }
    return val;
}


int dequeuer(struct queue *q){
	int val=-1;
	
	if(isempty(q)){
		printf("the queue is empty\n");
	}
	else{
		
		val=q->arr[q->rear];
		q->rear--;
		
		printf("\nthe element %d is deleted from the rear of the queue \n",val);
			
	}
	return val;
	
}

 Display(struct queue *q)
{
    int i=0;
    while(i<=(q->rear))
    {
        printf("\nElement:%d\n",q->arr[i]);
        i++;
    }
}


int main(){
	struct queue *q=(struct queue *)malloc(sizeof(struct queue));
	q->size=5;
	q->front=-1;
	q->rear=-1;
	q->arr=(int *)malloc(q->size*sizeof(int ));
	
	
	
	enqueuer(q,27);
	enqueuer(q,272);
	enqueuer(q,271);
	Display(q);
	//
	printf("\n the element to be deleted from the rear end is %d\n\n",dequeuer(q));
	Display(q);
	enqueuef(q,2);
	
	printf("\n the element to be deleted from the front end is %d\n\n",dequeuef(q));
	Display(q);
	printf("\n the element to be deleted from the rear end is %d\n\n",dequeuer(q));
	Display(q);
//	
	enqueuer(q,12);
	enqueuer(q,13);
	enqueuer(q,14);
	Display(q);
//	
	printf("\n the element to be deleted from the front end is %d\n\n",dequeuef(q));
	Display(q);
	enqueuef(q,44);
	Display(q);
	
	dequeuef(q);
	Display(q);
	
	enqueuef(q,99);
	
/*

	enqueuer(q,27);
	enqueuer(q,272);
	enqueuer(q,271);
	//Display(q);
	
	dequeuer(q);
	//Display(q);
	//enqueuef(q,2);
	
	dequeuef(q);
	Display(q);
	dequeuer(q);
	//Display(q);
	
	enqueuer(q,12);
	enqueuer(q,13);
	enqueuer(q,14);
//	Display(q);
	
	dequeuef(q);
	Display(q);
	enqueuef(q,44);
	Display(q);
	
	dequeuef(q);
	Display(q);
	
	enqueuef(q,99);
	Display(q);
	*/
	

		
	return 0;
}
