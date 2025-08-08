//LAB EXERCISE 3: Sum of Digits
//? Write a C program that takes an integer from the user and calculates the sum of its digits
//using a while loop.
//? Challenge: Extend the program to reverse the digits of the number.
#include<stdio.h>
int main()
{
	int n , rev = 0 , sum = 0;
	printf("Enter An Integer:\n");
	scanf("%d",&n);
	int temp = n;
	
	while(n!=0)
	{
		int digit = n % 10;
		sum = sum + digit;	       //digit = 1,2,3            //n = 321
		rev = rev * 10 + digit;          // rev =1,10+2=12,120+3=123   
		n = n/10;                         //n =321/10 = 32/10=3 
	}
	printf("Sum of digit %d = %d\n",temp,sum);
	printf("Original Number = %d \n",temp);
	printf("Reversed Number = %d\n",rev);
	
}
