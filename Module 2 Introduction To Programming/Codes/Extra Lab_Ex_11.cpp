//5. Functions
//LAB EXERCISE 1: Fibonacci Sequence
//? Write a C program that generates the Fibonacci sequence up to N terms using a recursive
//function.
//? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
//and recursive methods. Compare their efficiency.
#include<stdio.h>
int fibo_recursive(int n);
void fibo_iterative(int n);
int main()
{
	int n;
	printf("Enter Term you want to print Fibonacchi Series:\n");
	scanf("%d",&n);
	int n1 = 0, n2 = 1;
	printf("Recursive Method:\n");
	printf("Series is: %d,%d,",n1,n2);
	
	for(int i=2; i<=n; i++)
	{
		printf("%d,",fibo_recursive(i));
	}
	printf("\n");
	printf("iterative Method:");
	fibo_iterative(n);
	

		
}
int fibo_recursive(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
	{
		int fibonacchi = fibo_recursive(n-1) + fibo_recursive(n-2);
		return fibonacchi;
	}
		
	
}
void fibo_iterative(int n)
{

	int a = 0, b = 1 , c;
	for(int i=0; i<=n; i++)
	if(i == 0)
	{
		printf("0,");
	}
	else if(i == 1)
	{
		printf("1,");
	}
	else
	{ 
		c = a + b; 
		printf("%d,",c);			 //c = 1 ,1+1=2 ,2+1=3,2+3 =5
		a = b;     //a = 1 1 2 3
		b = c;	  //b= 1 2 3 5
	}

}


