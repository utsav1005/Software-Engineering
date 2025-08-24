//Class for Bank Account
//o Create a class BankAccount with data members like balance and member functions
//like deposit and withdraw. Implement encapsulation by keeping the data members
//private.
#include<iostream>
using namespace std;

class BankAccount{
	private:
		double balance;
		
	public:
		
		BankAccount(double initialBalance = 0){
			if(initialBalance < 0)
				balance = 0;
			else
				balance = initialBalance;
		}	
	
	//Deposit Money	
	public :
		
		 void deposit(double amount){
			if(amount > 0){
				balance += amount;
				cout << "Deposited Successfully:" << amount << endl;
				cout << "Updated Balance is: " << balance << endl;
			}
		
		else
			cout << "Invalid Deposit Amount!!" << endl;
	}
	 	//Withdraw Amount
	 	void withdraw(double amount){
	 		if(amount > 0 && amount <=balance){
	 			balance -= amount;
	 			cout << "Withdrawn :" << amount << endl;
	 			cout << "Updated Balance :" << balance << endl;
			 }
			 else{
			 	cout << "Insufficient Amount or Funds!!" << endl;
			 }
		 }
		
		 	double getBalance(){
		 	return balance;
		 }
};

int main()
{
	BankAccount account(10000);
	cout << "Initial Balance :" << account.getBalance() << endl;
	//Deposit Amount
	account.deposit(5000);
	//withdraw Amount
	account.withdraw(14000);
	
	
	
}
