//LAB EXERCISE 2: Multiplication Table
//? Write a C program that takes an integer input from the user and prints its multiplication
//table using a for loop.
//? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
#include<stdio.h>
int main()
{
	int n;
	int range;
	printf("Enter Number you want to print Multiplication Number:\n");
	scanf("%d",&n);
	printf("Enter Range you want to print Multiplication Number:\n");
	scanf("%d",&range);
	
	for(int i=1; i<=range; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
	return 0;
}
