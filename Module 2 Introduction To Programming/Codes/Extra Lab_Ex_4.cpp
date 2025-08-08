//LAB EXERCISE 2: Number Comparison
//? Write a C program that takes three numbers from the user and determines:
//o The largest number.
//o The smallest number.
//? Challenge: Solve the problem using both if-else and switch-case statements.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Numbers for Comparison which is largest or smallest:\n");
	scanf("%d %d %d", &a, &b, &c );
	//Largest
	if(a<=b && a<=c)
	{
		printf("A is Smallest:\n");
	}
		else if(b<=a && b<=c)
	{
		printf("B is Smallest:\n");
	}
	else
		printf("C is Smallest:\n");
	if(a>=b && a>=c)
	{
		printf("A is Largest:\n");
	}
	else if(b>=c && b>= a)
	{
		printf("B is Largest:\n");
	}
		else
	{
			printf("C is Largest: \n");
	}

	return 0;
}
