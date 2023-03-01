#include<stdio.h>

void printArray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ---> ",a[i]);
	}
}

void insertionsort(int *a,int n){
	int key,j,i;
	for(i=1;i<=n-1;i++){
		
		key=a[i];
		j=i-1;
		
		while(j>=0 && a[j] > key){			// for deescending order a[j] < key; 
				a[j+1]=a[j];
			j--;
			
		}
		a[j+1]=key;
	}
}



int main(){
	
	int a[]={12,54,65,7,23,9};
	int n=6;
	printArray(a,n);
	printf("\n\nafter sorthing:\n\n"); 
	insertionsort(a,n);
	printArray(a,n);
	return 0;
}
