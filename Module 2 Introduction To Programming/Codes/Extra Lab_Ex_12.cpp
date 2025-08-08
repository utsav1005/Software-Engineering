//LAB EXERCISE 2: Factorial Calculation
//? Write a C program that calculates the factorial of a given number using a function.
//? Challenge: Implement both an iterative and a recursive version of the factorial function and
//compare their performance for large numbers.
#include<stdio.h>
int factorial_iterative(int n);
int factorial_recursive(int n);
int main()
{
	int n;
	printf("Enter Number to Print Factorial Of number :\n");
	scanf("%d",&n);
	printf("Factorial Of Iterative Way is:%d \n",factorial_iterative(n));
	printf("\n");
	printf("Factorial Of Recursive Way is:%d",factorial_recursive(n));

	return 0;
	
}
int factorial_iterative(int n)
{
	int fact = 1;
	for(int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int factorial_recursive(int n)
{
	int fact = 1;
	if(n == 0 || n == 1)
	{
			return 1;
	}
	else
	{
	int factn = n*factorial_recursive(n-1);         
	return factn;
	}
	

}
