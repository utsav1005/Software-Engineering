//4. Arrays
//LAB EXERCISE 1: Maximum and Minimum in Array
//? Write a C program that accepts 10 integers from the user and stores them in an array. The
//program should then find and print the maximum and minimum values in the array.
//? Challenge: Extend the program to sort the array in ascending order.
#include<stdio.h>
int main()
{
	int arr[10];
	int temp=0,max,min;
	printf("You Can Store 10 Elements in Array:\n");
	for(int i=0; i<10; i++)
	{
		printf("Enter Element at index of[%d]:",i);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	min = arr[0];	
	printf("\n");
	printf("Element of Array is :\n");
	for(int i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("\n");
	printf("\n");
	printf("Maximum element in Array is: %d\n",max);
	printf("Minimum Element in Array is: %d\n",min);
	
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(arr[i] > arr[j])
			{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
		
		}
	}
	printf("\n");
	printf("Sort in Ascending Order:\n");
	for(int i=0; i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	

	return 0;
}
