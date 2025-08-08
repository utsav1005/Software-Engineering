//LAB EXERCISE 2: Matrix Addition
//? Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
//resultant matrix.
//? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter Row size for prints 2x2 Matrices:\n");
	scanf("%d",&row);
	printf("Enter Row size for prints 2x2 Matrices:\n");
	scanf("%d",&col);
	int arr1[row][col];
	int arr2[row][col];
	int sum[row][col];
	//Input Array 1 
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("Enter Elements of index at[%d][%d]:\n",i,j);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
		//Input Array 2 
		printf("Matrix A :\n");
		for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
		for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("Enter Elements of index at[%d][%d]:\n",i,j);
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
		printf("Matrix B :\n");
		for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	
	
	//Sum of A And B:
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("Matrix Addition Of A+B:\n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	//Multiplication of 3x3 Matrix
	
	
	int arr3[3][3];
	int arr4[3][3];
	int c[3][3];
	
	//Input X Matrix
	printf("3 x 3 Matrix Multiplication-- Enter X Matrix:\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter Elements at index of [%d][%d]:\n",i,j);
			scanf("%d",&arr3[i][j]);
		}
	
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",arr3[i][j]);
		
		}
		printf("\n");
	}
	
	//Input Y Matrix
	
	printf("3 x 3 Matrix Multiplication-- Enter Y Matrix:\n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter Elements at index of [%d][%d]:\n",i,j);
			scanf("%d",&arr4[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",arr4[i][j]);
		
		}
		printf("\n");
	}
	
	//C is intialize with 0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j] =0;
		
		}
	
	}
		//Matrix Multiplication
	printf("Matrix Multiplication is : X * Y = \n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				c[i][j] += arr3[i][k] * arr4[k][j];
			}
		}
		printf("\n");
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",c[i][j]);
		
		}
		printf("\n");
	}
	
}

