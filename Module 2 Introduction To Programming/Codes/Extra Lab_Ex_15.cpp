//LAB EXERCISE 2: Count Vowels and Consonants
//? Write a C program that takes a string from the user and counts the number of vowels and
//consonants in the string.
//? Challenge: Extend the program to also count digits and special characters.
#include<stdio.h>
int main()
{
	char str[200];
	int vowels = 0 , consonants = 0 , special = 0 , digit = 0;
	printf("Enter String for check how many Vowles and consonants are there:\n");
	fgets(str,200,stdin);
	
	for(int i = 0; i < str[i]!='\0'; i++)
	{
	if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I' || str[i] == 'O'|| str[i] == 'U')
	{
		vowels++;
	}
	else if((str[i]>='A' && str[i]<='Z') || (str[i])>='a' && str[i]<='z')
	{
		consonants++;
	}
	else if(str[i]>='0' && str[i]<='9')
	{
		digit++;
	}
	else if(str[i]!= ' ' && str[i]!='\n')
	{
		special++;
	}
	}
	
	printf("Vowels are: %d\n",vowels);
	printf("Consonants are: %d\n",consonants);
	printf("Digits are: %d\n",digit);
	printf("Special Character are: %d",special);
	return 0;
}
