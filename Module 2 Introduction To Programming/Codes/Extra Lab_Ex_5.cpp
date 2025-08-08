//3. Loops
//LAB EXERCISE 1: Prime Number Check
//? Write a C program that checks whether a given number is a prime number or not using a for
//loop.
//? Challenge: Modify the program to print all prime numbers between 1 and a given number.
#include<stdio.h>
//Time Complexity is O(vn)
int main()
{
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	
	printf("Prime Numbers Between 1 to %d:\n",n);
	
	for(int i=2; i<=n; i++)
	{
		int flag = 1; 
		if(i ==2 || i == 3)
		{
				flag = 1;
		}
		else if(i %2 == 0 || i % 3 == 0)
		{
				flag = 0;
		}
		else
		{
			for(int j=5; j*j<=i; j+=6)
			{
				if(i % j  == 0 || i % (j + 2) == 0)
				{
					flag = 0;
					break;
				}
				
			}
		}
		if(flag)
			printf("%d ",i);	
	}
	printf("\n");
	return 0;
	

		
	
		
}

	



