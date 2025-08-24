//1. Class for a Simple Calculator
//o Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
//o Objective: Introduce basic class structure.
#include<iostream>
using namespace std;
class Calculator{
	public :
		//Addition
		double add(double a , double b){
			return a + b;
		}

		//Subtraction
		double subtraction(double a , double b){
			return a - b;
		}

		//Multiplication
		double multiplication(double a ,double b){
			return a * b;
		}

		//Division
		double division(double a , double b){
			if(b!=0)
				return a/b;
			else	
				cout << "Error !! Division by Zero is not Possible" <<endl;
				return 0;
		}
	
};
int main()
{
	Calculator c1;
	int a , b;
	cout << "Enter 1st Number :" <<endl;
	cin >> a;
	cout << "Enter 2nd Number :" <<endl;
	cin >> b;
	cout << "Here Performs ALl Operations For a and b: "<<endl;
	cout<< "Addition is : "<<c1.add(a,b)<<endl;
	cout<< "Subtraction is : "<<c1.subtraction(a,b)<<endl;
	cout<< "Multiplication is : "<<c1.multiplication(a,b)<<endl;
	cout<< "Division is : "<<c1.division(a,b)<<endl;
	



	
}
