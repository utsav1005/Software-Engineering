//9. Arrays in C
//Write a C program that stores 5 integers in a one-dimensional array and prints
//them. Extend this to handle a two-dimensional array (3x3 matrix) and
//calculate the sum of all elements.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Length of an Array Which you wants to stores in Array:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter Elements at Index of[%d]:\n",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("Elements of an array At index of [%d] is: %d\n",i,arr[i]);
	}
	printf(".......Sum of Two Dimensional 3x3 Matrix Array.......:\n");
	printf("Enter A= 3x3 Matrix\n");
	int row=3,col=3;
	int arr1[row][col];
	int arr2[row][col];
	int sum = 0;
	for(int row = 0; row<3; row++)
	{
		for(int col = 0; col<3; col++)
		{
			printf("Enter Elements at index of[%d][%d]\n",row,col);
			scanf("%d",&arr1[row][col]);
		}
	}
	for(int row = 0; row<3; row++)
	{
		for(int col = 0; col<3; col++)
		{
			printf("%d ",arr1[row][col]);
		}
		printf("\n");
	}
	
	printf("Enter B= 3x3 Matrix :\n");
	
		for(int row = 0; row<3; row++)
	{
		for(int col = 0; col<3; col++)
		{
			printf("Enter Elements at index of[%d][%d]\n",row,col);
			scanf("%d",&arr2[row][col]);
		}
	}
	for(int row = 0; row<3; row++)
	{
		for(int col = 0; col<3; col++)
		{
			printf("%d ",arr2[row][col]);
		}
		printf("\n");
	}
	printf("Sum of A + B:\n");
	for(int row=0; row<3; row++)
	{
		for(int col=0; col<3; col++)
		{
			sum = arr1[row][col] + arr2[row][col];
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}
