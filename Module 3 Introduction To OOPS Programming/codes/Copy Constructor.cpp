#include<iostream>
using namespace std;
class Student{
public :
	string name;
	double* cgpaptr;
	
	Student(string name , double cgpa){
		this->name  = name;
		cgpaptr = new double();
		*cgpaptr = cgpa;
	}
	
	//Copy COnstructor
	Student(Student &orgobj){
		cout <<"Copy" <<endl;
		this-> name = orgobj.name;
		this-> cgpaptr = new double;
		*(this->cgpaptr) = *(orgobj.cgpaptr);
	}
	
	void getInfo(){
		cout << "Name is:" << name <<endl;
		cout << "CGPA is: " << *cgpaptr << endl;
		
		
	}
	
	//Destructor 
	~Student(){
		cout <<"Deleted "<<endl;
		delete cgpaptr;
	}
};
int main()
{
	Student s1("Utsav",7.89);
	s1.getInfo();
	
	cout <<endl;
	Student s2(s1);
	*(s2.cgpaptr) = 9.3;
	s2.getInfo();
	
	s1.getInfo();
	
	return 0;
}
