//o Write a C program that includes variables, constants, and comments. Declare
//and use different data types (int, char, float) and display their values

#include<stdio.h>
#define PI 3.14    //Constant using Define
int main()

{
	
	int age = 10;  //Integer
	char ch = 'A';  //Character
	float marks = 12.5; //Floating value
	const int YEAR = 26; //Constant using const
	
	printf("Age is %d\n",age);
	printf("Character is %d\n",ch);
	printf("Marks is %f\n",marks);
	printf("Year is %d\n",YEAR);
	printf("PI value is %f\n",PI);
	return 0;
	
	
}

