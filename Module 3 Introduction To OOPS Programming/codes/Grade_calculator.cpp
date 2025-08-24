// Grade Calculator
// o Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.
// o Objective: Practice conditional statements (if-else).
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter Your Marks " <<endl;
    cin >> marks;
    if(marks<=23){
        cout << "Your Grade is FF(Fail)"<<endl;
    }
    else if(marks >= 24 && marks <=35){
        cout << "Your Grade is DD(Bad)"<<endl;
    }
    else if(marks >=36 && marks<=46){
         cout << "Your Grade is CC(Not Bad)"<<endl;
    }
    else if(marks >=47 && marks <= 56){
         cout << "Your Grade is BB(Good)"<<endl;
    }
    else{
        cout << "Your Grade is AA(Very Good)" <<endl;
    }
    return 0;
}