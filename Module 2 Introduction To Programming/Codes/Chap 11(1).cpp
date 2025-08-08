//Write a C program that takes two strings from the user and concatenates them
//using strcat(). Display the concatenated string and its length using
//strlen().
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[500],str2[500];
	printf("Enter String 1:\n");
	fgets(str1,500,stdin);
	printf("Enter String 2:\n");
	fgets(str2,500,stdin);
	//Concatenate 2 Strings:
	strcat(str1,str2);  //Apppend str2 in str1
	printf("\nConcatenated String is %s ", str1);
	printf("\nLength is String 1 is: %d",strlen(str2));
	strcpy(str1,str2);
	printf("String is %s",str1);
	
}
