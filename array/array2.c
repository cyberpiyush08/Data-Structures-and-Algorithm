#include<stdio.h>

void main(){
	int a[]={1,2,3,4};
	int num,pos,size=4,i;
	
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


	printf("\nenter the position to be deleted");
	scanf("%d",&pos);
	
	for(i=pos-1;i<=size-1;i++){
		a[i]=a[i+1];
	}
		printf("\nthe elements are\n");
		
	for(i=0;i<size;i++){
		
		printf("%d\n",a[i]);
	}

	
	
}
