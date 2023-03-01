#include<stdio.h>

void main(){
	int a[10],size,i,num,pos,del;
	printf("enter the size of the array:");
	scanf("%d",&size);
	
	printf("enter the elements in the array:\n");
	
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	 
	printf("the elements are\n ");
	for(i=0;i<size;i++){
		printf("the elements at %d position is %d\n",i,a[i]);
	}
	
	printf("enter the element to be inserted:\n");

	
	scanf("%d",&num);
	

	
	
	printf("enter the position of th elemenet to be enter:\n");
scanf("%d",&pos);
	
	for(i=size-1;i>=pos-1;i--){
		
		a[i+1]=a[i];
		
	}
	
	
	a[pos-1]=num;
	size++;
	printf("the elements are\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
	
	
	
	printf(" deletion operation\n");
	
	printf("enter the position of the elementf to  be deleted\n");
	scanf("%d",&del);
	
	for(i=del-1;i<size;i++){
		a[i]=a[i+1];
	}
	size--;
	
	printf("the elements are\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
	
	
	
	
	
}
