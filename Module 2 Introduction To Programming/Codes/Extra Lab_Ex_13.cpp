//LAB EXERCISE 3: Palindrome Check
//? Write a C program that takes a number as input and checks whether it is a palindrome using
//a function.
//? Challenge: Modify the program to check if a given string is a palindrome.
#include<stdio.h>
#include<string.h>
int isStringPalindrome(char str[]);
void isPalindrome(int n);
int main()
{
	int n;
	char str[200];
	printf("Enter Number to Print Palindrome Or not:\n");
	scanf("%d",&n);
	isPalindrome(n);
	printf("Enter String without given any space:\n");
	scanf("%s",str);
	if(isStringPalindrome(str))
	{
		printf("%s is a Palindrome \n",str);
	}
	else
	{
		printf("%s is a not Palindrome \n",str);
	}
		return 0;
}
void isPalindrome(int n)
{
	int rev = 0;
	int temp = n;
	while(n!=0)
	{
		int digit = n%10;           //n=121 digit=1,2,1
		rev = rev*10 + digit;      //rev=1,10+2=12,120+1=121 true.. 
		n = n/10; 	              	//n=12,1
	}
	if(temp == rev)
	{
		printf("Number is Palindrome\n");
	}
	else
	{
		printf("Numer is not Palindrome\n");
	}
}
int isStringPalindrome(char str[])
{
	int start = 0;
	int end = strlen(str) - 1;
	while(start < end)		//madam = madam
	{
		if(str[start]!=str[end])
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
	                             
}
