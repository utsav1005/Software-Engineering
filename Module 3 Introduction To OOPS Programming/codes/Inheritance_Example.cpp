#include<iostream>
using namespace std;
class Person{
	protected :
		string name;
		string role;
		int age;
	public :
		void setPersonDetails(string name , string role , int age){
			this->name = name;
			this->role = role;
			this->age = age;
		}
		void displayPersonInfo(){
			cout << "Name is:" << name << endl;
			cout << "Role is:" << role << endl;
			cout << "Age is:"  << age << endl;
			
		}
		
};

class Student : public Person{
	private:
		string course;
	public :
		void setStudentDetails(string name , string role , int age , string course){
//			setPersonDetails(name,role,age);
			this->name = name;
			this->role = role;
			this->age = age;
			this->course = course;
		}
		void displayStudentDetails(){
			cout << "Name :" << name << endl;
			cout << "Role :" << role << endl;
			cout << "Age :"  << age << endl;
			cout << "Course :" << course << endl; 
		}
};

class Teacher : public Person{
	private:
		string subject;
		
	public:
		void setTeacherDetails(string name , string role , int age , string subject){
			setPersonDetails(name,role,age);
//			this->name = name;
//			this->role = role;
//			this->age = age;
			this->subject = subject;
		}
		
		void displayTeacherDetails(){
			cout << endl;
			cout << "Name :" << name << endl;
			cout << "Role :" << role << endl;
			cout << "Age :"  << age << endl;
			cout << "Subject :" << subject << endl; 
		}
};

int main()
{
		Student s1;
		s1.setStudentDetails("Utsav Bhavar","Student",20,"B.E CSE");
		s1.displayStudentDetails();
		
		Teacher t1;
		t1.setTeacherDetails("Mamta Patel","Teacher",28,"Gujarati");
		t1.displayTeacherDetails();
		
}
