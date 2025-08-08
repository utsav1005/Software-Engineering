//LAB EXERCISE 1: Simple Calculator
//? Write a C program that acts as a simple calculator. The program should take two numbers
//and an operator as input from the user and perform the respective operation (addition,
//subtraction, multiplication, division, or modulus) using operators.
//? Challenge: Extend the program to handle invalid operator inputs.
#include<stdio.h>
int main()
{
	int a,b,result;
	char choice;
	printf("-----------SIMPLE CALCULATOR-----------\n");
	printf("Enter Number a & b:\n");
	scanf("%d %d",&a,&b);
	printf("Enter Choice Which Operation Do You Want to Perform:(i.e +,-,*,/)\n");
	scanf(" %c",&choice);
	
	switch(choice)
	{
	

		case '+': printf("Addition Operations:\n");
				  result = a + b;
				  printf("Addition of %d + %d is = %d\n",a,b,result);
				  break;
				
		case '-': printf("Subtraction Operations:\n");
				  result = a - b;
				  printf("Subtraction of %d - %d is = %d\n",a,b,result);
				  break;
				
		case '*': printf("Multiplication Operations:\n");
			      result = a * b;
			   	  printf("Multiplication of %d * %d is = %d\n",a,b,result);
				  break;
				
		case '/': printf("Division Operations:\n");
					if(b==0)
					{
						printf("Divisor Can't be Zero(0)\n");
						break;	
					}	
				  result = a / b;
				  printf("Division of %f / %f is = %4f\n",a,b,result);
				  break;
				  
		default: printf("Invalid Operations:\n");
				 break;
			
	}
	printf("Result is %d\n",result);
	while(1)
	{
		printf("Enter next Operation or quit by enter 'q' or 'Q':\n");
		scanf(" %c",&choice);
		if(choice == 'q' || choice == 'Q')
		{
			printf("Calculated Exited...\n");
			break;
		}
		int nextNum;
		printf("Enter Next Number:");
		scanf("%d",&nextNum);
		
		switch(choice)
	{
	

		case '+': printf("Addition Operations:\n");
				  result += nextNum;
				  printf("Addition of %d + %d is = %d\n",a,b,result);
				  break;
				
		case '-': printf("Subtraction Operations:\n");
				  result -= nextNum;
				  printf("Subtraction of %d - %d is = %d\n",a,b,result);
				  break;
				
		case '*': printf("Multiplication Operations:\n");
			     result *= nextNum;
			   	  printf("Multiplication of %d * %d is = %d\n",a,b,result);
				  break;
				
		case '/': printf("Division Operations:\n");
					if(nextNum==0)
					{
						printf("Divisor Can't be Zero(0)\n");
						break;	
					}	
				  result /= nextNum;
				  printf("Division of %f / %f is = %4f",a,b,result);
				  break;
				  
		default: printf("Invalid Operations:");
				 break;
			
	}
	printf("Result is %d\n",result);
		
	}
	
	
	
	
	return 0;
}
