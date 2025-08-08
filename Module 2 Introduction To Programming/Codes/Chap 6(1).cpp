//6. Looping in C
//Write a C program to print numbers from 1 to 10 using all three types of loops
//(while, for, do-while).
#include<stdio.h>
int main()
{
	//for loop
	printf("Prints 1-10 by For loop:\n");
	for(int i=1; i<=10; i++)
	{
		printf("%d\n",i);
	}
	//While loop
	
	int i=1;
	printf("Prints 1-10 by While loop\n");
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	//do while loop
	int j=1;
	printf("Prints 1-10 by Do-while loop\n");
	do
	{
		printf("%d\n",j);
		j++;
	}while(j<=10);
	
	return 0;
}
