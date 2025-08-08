//4.Operators in C
//o Write a C program that accepts two integers from the user and performs
//arithmetic, relational, and logical operations on them. Display the results.

#include<stdio.h>
int main()
{
		int x,y;
		int a,b;
		printf("Enter Value 1 (x):\n");
		scanf("%d",&x);
		printf("Enter value 2(y):\n");
		scanf("%d",&y);
		printf("Two Number Addition is %d\n",x + y); //Arithmetic operator
		printf("Subtraction is %d\n",x + y);
		printf("Multiplication is %d\n",x * y);
		if(b!=0)
		{
			printf("Division is %f\n",x/y);
		}
		printf("a==b :%d\n",a==b);     //Relational Operator
		printf("a>=b:%d\n",a>=b);
		printf("a<=b:%d\n",a<=b);
		printf("a<b:%d\n",a<b);
		printf("a>b:%d\n",a>b);
		
		printf("a&&b :%d\n",a&&b);   //Logical Operator
		printf("a||b:%d\n",a||b);
		printf("!a :%d\n",!a);
		printf("!b :%d\n",!b);
		
}

