//Create a Project to demonstrate an Event Organiser Project which will help to manage
//the Events. The Project should contain all the necessary requirements i.e need to use
//conditional Statements, Loops, Function and also A Program should use the concept
//of OOP.
//1) After asking the event name , it should ask your
//I. FIRST NAME,LAST NAME.
//II. Number of Guests.
//III. Number of Minutes.
//2. Once the all the Input requirement is over, you should be able to get the Event Cost
//Estimation.
// Use the following rate card :
//a. const double CostPerHour = 18.50;
//b. const double CostPerMinute = .40;
//c. const double CostOfDinner = 20.70;
//i. GET Number of Servers.
//(1 Server can handle 20 guests, so FIND how much server required for No. of Guests you
//Entered.) (Hint : You can use ceil() function . (i.e : rounds up the nearest integer)
//ii. GET COST of ONE Server.
//Example :
//Cost1 = (NumberOfMinutes / 60) * CostPerHour;
//Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
//CostForOneServer = Cost1 + Cost2;
//GET COST for FOOD.
//TotalFoodCost = NumberOfGuests * CostOfDinner;
//Get Average Cost Per Person
//AverageCost = TotalFoodCost / NumberOfGuests;
//GET TOTAL COST.
//TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers)
//GET DEPOSIT AMOUNT
//DepositAmount = TotalCost * .25;
#include<iostream>
#include<math.h>
using namespace std;

class Event{
	private:
	string eventName;
	string firstName;
	string lastName;
	int numGuests;
	int numMin;
	const double CostPerHour = 18.50;
	const double CostPerMinute = 0.40;
	const double CostOfDinner = 20.70;
		
	public: 
		void getEventDetails(){
		cout << "Enter the name of the event:" <<endl;
		cin >> eventName;
		cout << "Enter the Customer's First and last name:" <<endl;
		cin >> firstName >> lastName;
		cout << "Enter the number of guests:" <<endl;
		cin >> numGuests;
		
		cout << "Enter the number of minutes in the event:" <<endl;
		cin >> numMin;		
	}
	
	public:
		void calculateEventCost(){
//			Number of Servers
			int numServers = ceil(numGuests/20.0);
			cout << "Number of Server: " << numServers << endl; 
			double cost1 = (numMin / 60) * CostPerHour;
			double cost2 = (numMin % 60) * CostPerMinute;
			double costPerServer = cost1 + cost2;
			//Total Food Cost
			
			double totalFoodCost = numGuests * CostOfDinner;
			cout << "The cost for Servers:" << costPerServer << endl;
			cout << "The cost for Food is :" << totalFoodCost <<endl;
			
//			Get Average Cost Per Person
			double avgCost = totalFoodCost / numGuests;
			cout << "Average Cost Per Person:" << avgCost <<endl;
			
//			Get Total Cost
			double totalCost = totalFoodCost + (costPerServer * numServers);
			cout << "Total Cost is:" << totalCost << endl;
			
//			Get Deposit Amount
			double depositAmount = totalCost * 0.25;
			cout << "Please Deposit a 25% Deposit to reserve the event" << endl;
			cout<< "The deposit needed is :"<<depositAmount;			
			
			
		}
};



int main()
{
	cout << "***********Event Management System******************" << endl;
	Event e;
	e.getEventDetails();
	e.calculateEventCost();
}
