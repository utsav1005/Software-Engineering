//Lab Challenge 1: Armstrong Number
//? Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
//153 = 1^3 + 5^3 + 3^3).
//? Challenge: Write a program to find all Armstrong numbers between 1 and 1000.
#include<stdio.h>
#include<math.h>
int isArmstrong(int num);
int main()
{
	int num;;
	printf("Enter Number for check Armstrong or not:\n");
	scanf("%d",&num);
	if(isArmstrong(num))
	{
		printf("Number is Armstrong\n");
	}
	else
	{
		printf("Number is not Armstrong\n");
	}
	
	printf("Armstrong number from 1 to 1000:\n");
	for(int i=1;i<=1000;i++)
	{
		if(isArmstrong(i))
		{
			printf("%d,",i);
		}
	}
	return 0;
}
int isArmstrong(int num)
{
	//count digit
	int count=0 , sum = 0 , flag = 0;
	int temp = num;    		//temp = 121
	while(temp!=0)
	{
		temp = temp/10;
		count++;          //count=1,1,1=3	
	}
	temp = num;			//temp = 153
	
	//logic of Armstrong Number
	while(temp!=0)
	{
		int digit = temp%10;						//digit=153%10=3,15%10=5 1
		sum = sum + pow(digit,count);	 	//sum=0+3^3=27+5^3=125+27+1^3=153
		temp = temp/10;						//temp =153/10=15 15/10=1 				
	}
	flag = num;	   //flag = 153
	
	return (flag == sum);
	
	
	
}


