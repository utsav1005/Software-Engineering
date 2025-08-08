//10. Pointers in C
//Write a C program to demonstrate pointer usage. Use a pointer to modify the
//value of a variable and print the result.
#include<stdio.h>
void swap(int *a , int *b);
int main()
{
	int a,b;
	printf("Enter Number a:\n");
	scanf("%d",&a);
	printf("Enter Numeber b:\n");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Swapped Value inside Main Method a = %d , b = %d",a,b);
}
void swap(int *a , int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("Swapped Value inside function a = %d , b = %d \n",*a,*b);
}
