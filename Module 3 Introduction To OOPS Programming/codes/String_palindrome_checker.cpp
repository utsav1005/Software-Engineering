// String Palindrome Check
// o Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// o Objective: Practice string operations.
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[2000];
    bool isPalindrome = true;  //By Default True
    cout<<"Enter Any String for check it's Palidrome String or not!!" <<endl;
    cin.getline(str,2000);
    
    int start = 0;
    int end = strlen(str)-1;
    while(start < end){
        if(str[start] != str[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        cout << "String is Palindrome !!!" <<endl;
    }
    else{
        cout << "String is not Palindrome !!!"<<endl;
    }
    return 0;
}