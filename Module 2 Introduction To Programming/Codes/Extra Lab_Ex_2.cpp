//LAB EXERCISE 2: Check Number Properties
//Write a C program that takes an integer from the user and checks the following using
//different operators:
//o Whether the number is even or odd.
//o Whether the number is positive, negative, orzero.
//o Whether the number is a multiple of both 3 and 5.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number n for check Whether number is even or odd, number is Positive,negative,or zero,and number is a multiple of both 3 and 5:\n ");
	scanf("%d",&n);
	if(n % 2 == 0)
		printf("Number is Even\n");
	else
		printf("Number is Odd\n");
	if(n>0)
		printf("Number is Positive\n");
	else if(n == 0)
		printf("Number is zero\n");
	else 
		printf("Number is Negative\n");
	if(n % 3 == 0 && n % 5 == 0)
		printf("Number is a multiple of both 3 and 5\n");
	else
		printf("Number is not multiple of both 3 and 5\n");
	return 0;
		
}
