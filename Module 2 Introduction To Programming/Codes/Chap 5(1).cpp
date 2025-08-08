//5. Control Flow Statements in C
//Write a C program to check if a number is even or odd using an if-else
//statement. Extend the program using a switch statement to display the month
//name based on the user’s input (1 for January, 2 for February, etc
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number to check Number is even or odd:");
	scanf("%d",&n);
	if(n%2 == 0)
	{
		printf("Number is even \n");
	}	
	else
	{
		printf("Number is odd\n");
	}
	int choice;
	printf("Display Month By Typing 1-12 (i.e 1 for January)\n");
	printf("Enter Your choise for print Month:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("Month is January\n");
				break;
				
		case 2: printf("Month is February\n");
				break;
				
		case 3: printf("Month is March\n");
				break;
				
		case 4: printf("Month is April\n");
				break;
			
		case 5: printf("Month is May\n");
				break;
		
		case 6: printf("Month is June\n");
				break;
				
		case 7: printf("Month is July \n");
				break;
				
		case 8: printf("Month is August\n");
				break;
				
		case 9: printf("Month is September\n");
				break;
			
		case 10: printf("Month is Octomber\n");
				break;
				
		case 11: printf("Month is November\n");
				break;
				
		case 12: printf("Month is December\n");
				break;
				
		default: printf("Invalid choise:\n");	
	
				
	}
	return 0;
}
