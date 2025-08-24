#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number = rand() % 100 ;  //Number between 1-100
    int guessNum;

    cout << "Guess Number between 1-100 number!!!!!\n";
    do{
        cout << "Enter Your Guess: " <<endl;
        cin >> guessNum;

        if(guessNum < 1 || guessNum > 100){
            cout << "Invalid !! Please enter a number between 1 to 100.\n";
            continue;
        }
        if(guessNum > number){
            cout << "Your Guess is High!Try Again" <<endl;
        }
        else if(guessNum < number){
            cout << "Your Guess is low ! Try Again" <<endl;
        }
        else{
            cout << "Congratulations !! Your Guess is True." <<endl;
        }
    }while(guessNum != number);
    return 0;
}