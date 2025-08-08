//6. Strings
//LAB EXERCISE 1: String Reversal
//? Write a C program that takes a string as input and reverses it using a function.
//? Challenge: Write the program without using built-in string handling functions
#include<stdio.h>
#include<string.h>
void reverseString(char str[]);
int main()
{
	char str[200];
	printf("Enter string for reverse string:\n");
	fgets(str,200,stdin);
	reverseString(str);
	printf("Reverse string is %s",str);
	return 0;

}
void reverseString(char str[])
{
	int start = 0;  			  //hello = olleh
	int end = strlen(str)-1;
	char temp;
	
	while(start<end)
	{								//Hello=olleh
		temp = str[start];         //temp = str[h]=h ,e,l,l,h
		str[start] = str[end];  	//str[h] = str[o] =o ,l,l,e,h
		str[end] = temp;			//str[o] = h,e,l,l,
		start++;                 	//start=e,l,l,o end =l ,l,e,h
		end--;					
	}

	
	
	
}
