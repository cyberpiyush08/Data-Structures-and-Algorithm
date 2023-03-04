#include<stdio.h>

void printArray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ---> ",a[i]);
	}
}
void selectionsort(int *a,int n){
	int i,j,temp,indexofmin;
	for(i=0;i<n;i++){
		indexofmin=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[indexofmin]){
				indexofmin=j;
			}
		}
		temp=a[i];
		a[i]=a[indexofmin];
		a[indexofmin]=temp;
	}
}

int main(){
	int a[]={3,14,2,12,6};
	int n=5;
	printArray(a,n);
	selectionsort(a,n);
	printf("\nafter selection sort\n");
	printArray(a,n);
	
	
	return 0;
}
