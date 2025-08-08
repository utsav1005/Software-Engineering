//12. Structures in C - User defined function
//LAB EXERCISE:
//o Write a C program that defines a structure to store a student's details (name,
//roll number, and marks). Use an array of structures to store details of 3
//students and print them.
#include<stdio.h>
int main()
{
	struct student{
		char name[500];
		int roll_num;
		float marks;
	};
	//Array Of Structures to store details of 3 students
	struct student students[3];
	
	for(int i=0; i<3; i++)
	{
		printf("Enter details of Student %d:\n",i+1);
		printf("Enter Student's Full Name:\n");
		scanf(" %[^\n]",students[i].name);
		
		printf("Enter Student's Roll Number:\n");
		scanf("%d",&students[i].roll_num);
		
		printf("Enter Student's Marks:\n");
		scanf("%f",&students[i].marks);
		
		printf("\n");
	}
	printf("||||Student's Details||||||\n");
	for(int i=0; i<3; i++)
	{
		printf("Student %d :\n",i+1);
		printf("Student's Full Name: %s\n",students[i].name);		
		printf("Student's Roll Number:%d\n",students[i].roll_num);
		printf("Student's Marks:%2f\n",students[i].marks);

	}
	return 0;
}
