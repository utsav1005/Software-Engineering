//LAB EXERCISE 3: Sum of Array Elements
//? Write a C program that takes N numbers from the user and stores them in an array. The
//program should then calculate and display the sum of all array elements.
//? Challenge: Modify the program to also find the average of the numbers.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Length Of an Array:");
	scanf("%d",&n);
	int arr[n];
	int sum = 0;
	float avg = 0;
	
	//Input from the User
	for(int i=0; i<n; i++)
	{
		printf("Enter Elements in array at index of[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	//Shows Array Elements 
	printf("Elements of an array is:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
		
	}
	printf("\n");
	
	//Sum of an Array elements
	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of array Elements is : %d\n",sum);
	avg = sum/n;
	
	//average of an Array elements
	printf("Average of array Elements is : %4f",avg);
	
	return 0;
	
	
}

