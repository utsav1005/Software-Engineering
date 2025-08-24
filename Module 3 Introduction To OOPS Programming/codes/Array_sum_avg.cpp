// Array Sum and Average
// o Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.
// o Objective: Understand basic array manipulation.
#include<iostream>
using namespace std;
int main(){
    int size;
    int sum = 0;
    float avg = 0;
    cout << "Enter Size of an array:" <<endl;
    cin >> size;
    int arr[size];
    cout << "Enter Elements:" <<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter Element at index of["<<i<<"]:";
        cin >> arr[i];
    }
    cout<<endl;
    cout<< "Array Element is:"<<endl;
    for(int i=0; i<size; i++){
        cout<< " " <<arr[i];
     }
     cout <<endl;

     //Sum of an array
     for(int i=0; i<size; i++){
        sum = sum + arr[i];
     }
     cout<< "Sum of an Array is :" <<sum <<endl; 

     //Average of an array
     avg = sum/size;
     cout << "Average of Array is:" <<avg <<endl;
     return 0;
}