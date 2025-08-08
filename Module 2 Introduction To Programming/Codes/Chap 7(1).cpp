//7. Loop Control Statements
//Write a C program that uses the break statement to stop printing numbers
//when it reaches 5. Modify the program to skip printing the number 3 using the
//continue statement.
#include<stdio.h>
int main()
{
	printf("Break statement:(When loop reaches 5 it's break loop)\n");
	for(int i=1; i<=10; i++)
	{
		if(i==5)
			break;
		printf("%d\n",i);
		
	}
	printf("Continue Statement:(3 is skipped)\n");
	for(int i=1; i<=10; i++)
	{
		if(i == 3)
			continue;
		printf("%d\n",i);
	}
	
	return 0;
}
