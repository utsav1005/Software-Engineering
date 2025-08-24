#include<iostream>
using namespace std;
double addition(double a , double b){
    return a + b;
}
double subtraction(double a  , double b){
    return a - b;
}
double multiplication(double a , double b){
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
int main(){
    int a , b;
    cout <<"Enter Number a for operations"<<endl;
    cin>>a;
    cout <<"Enter Number b for operations"<<endl;
    cin>>b;
    cout << "Addition of Two Number:"<<addition(a,b)<<endl;
    cout << "subtraction of Two Number:"<<subtraction(a,b)<<endl;
    cout << "Multiplication of Two Number:"<<multiplication(a,b)<<endl;
    cout << "division of Two Number:"<<division(a,b)<<endl;

    return 0;
}