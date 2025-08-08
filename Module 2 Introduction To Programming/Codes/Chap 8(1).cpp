//8. Functions in C
// Write a C program that calculates the factorial of a number using a function.
//Include function declaration, definition, and call.
#include<stdio.h>
int factorial(int n);   //Function Declaration
int main()
{
	int n;
	printf("Enter Number to prints Factorial of given number:\n");
	scanf("%d",&n);
	printf("Factorial Of given Number is :%d\n",factorial(n));  //Function Call
	return 0;	

}
int factorial(int n) //Function Definition
{
	int fact = 1;
	if(n == 1 && n == 0)
		return 1;
	for(int i=2; i<=n; i++)   //i=2  i<=4
	{
		fact = fact * i;   // fact = 2,2*3=6,6*4= 4!=24
	}
	return fact;
}
