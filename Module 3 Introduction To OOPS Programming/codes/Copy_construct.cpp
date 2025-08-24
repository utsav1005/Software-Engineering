#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    double *cgpaPtr;

    Student(string name , int cgpa){
        this->name = name;
        cgpaPtr = new double();   //Allocates Memory for cgpa pointer 
        *cgpaPtr = cgpa;            
        
    }
    //Shallow Copy
    //Manually Creates Copy Constructor
    Student(Student &orgObj){
        cout<<"Copy Constructor"<<endl;
        this->name = orgObj.name;
       this->cgpaPtr = orgObj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name is"<<" "<<name<<endl;
        cout<<"CGPA is"<<" "<<*cgpaPtr<<endl;

    }
};
int main(){
    Student s1("Utsav Bhavsar",7.89);
    Student s2(s1);  //Default Copy Constructor
    s1.getInfo();
    *(s2.cgpaPtr) = 9.99;
    s2.getInfo();
    return 0;    
}