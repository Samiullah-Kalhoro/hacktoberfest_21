#include<stdio.h>
#include<stdlib.h>

void product(int **A, int  **B, int R1, int C1, int R2, int C2)
{
	int **C = (int **) malloc(sizeof(int *) * R1); 
	for(int i=0; i<R1; i++)  
 		C[i] = (int *)malloc(sizeof(int) * C2); 
 	int sum=0;
	for (int i = 0; i < R1; i++) 
	{
    	for (int j = 0; j < C2; j++) {
        	for (int k = 0; k < C1; k++) 
			{
          		sum = sum + A[i][k]*B[k][i];
        	}
 
        C[i][j] = sum;
        sum = 0;
      }
    }   
	
	printf("\n\nProduct:\n");
	for(int i=0; i<R1; ++i)
		{
			for(int j=0; j<C2; ++j)
				printf("%d\t", C[i][j]);
			printf("\n");
		}
	   
	
}


int main()
{
	int R1, C1, R2, C2;
	printf("Enter number of rows of matrix 1:");
	scanf("%d", &R1);
	printf("Enter number of columns of matrix 1:");
	scanf("%d", &C1);
	printf("\n\nEnter number of rows of matrix 2:");
	scanf("%d", &R2);
	printf("Enter number of columns of matrix 2:");
	scanf("%d", &C2);
	if(C1!=R2)
	{
		printf("Multiplication not possible.");
		return 1;
	}
	int **A = (int **) malloc(sizeof(int *) * R1);  
	int **B = (int **) malloc(sizeof(int *) * R2); 

/* Allocating memory for the col of three matrices. */ 
for(int i=0; i<R1; i++) 
 	A[i] = (int *)malloc(sizeof(int) * C1); 
for(int i=0; i<R2; i++)  
 	B[i] = (int *)malloc(sizeof(int) * C2); 
	
	printf("Enter the elements of matrix 1:\n");
	for(int i=0; i<R1; ++i)
		for(int j=0; j<C1; ++j)
			scanf("%d", &A[i][j]);
			
	printf("\n\nEnter the elements of matrix 2:\n");
	for(int i=0; i<R2; ++i)
		for(int j=0; j<C2; ++j)
			scanf("%d", &B[i][j]);
			
	printf("\n\nMatrix 1:\n");
	for(int i=0; i<R1; ++i)
		{
			for(int j=0; j<C1; ++j)
				printf("%d\t", A[i][j]);
			printf("\n");
		}
			
	printf("\n\nMatrix 2:\n");
	for(int i=0; i<R2; ++i)
		{
			for(int j=0; j<C2; ++j)
				printf("%d\t", B[i][j]);
			printf("\n");
		}
	product(A, B, R1, C1, R2, C2);
	return 0;	
	
}
