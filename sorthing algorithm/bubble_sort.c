#include<stdio.h>


void printArray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ---> ",a[i]);
	}
}

void bubblesort(int *a,int n){
	int temp,i,j;
	
	
	for(i=0;i<n-1;i++)				//for number of passes
	{        
	 printf("\nworking on pass %d\n",i+1);
	 
		for(j=0;j<n-1-i;j++)			// for comparison in ecah passes
		{
			
			if(a[j]>a[j+1])				//swapping is done over here 
			{		
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			
		}
		
	} 
}

  
//void bubblesortadaptive(int *a,int n){
//	int temp,i,j;
//	int issorted=0;
//	
//	for(i=0;i<n-1;i++)				//for number of passes
//	{        
//	 printf("\nworking on pass %d\n",i+1);
//	 issorted=1;
//		for(j=0;j<n-1-i;j++)			// for comparison in ecah passes
//		{
//			
//			if(a[j]>a[j+1])				//swapping is done over here 
//			{		
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				issorted=0;
//			}
//			
//		}
//		if(issorted==1){
//			return;
//			
//		}
//	} 
//}


int main(){
	
	//int a[]={12,54,65,7,23,9};
	int a[]={1,2,3,4,5};
///	int a[]={3,2,4,1,2,3,4,5};
	int n=6;
	printf("unsorted array\n\n");
	printArray(a,n);
	bubblesort(a,n);
//	printArray(a,n);
	// bubblesortadaptive(a,n);
	printf("\n\n\nsorted array\n\n");
	printArray(a,n);
	
	return 0;
}
