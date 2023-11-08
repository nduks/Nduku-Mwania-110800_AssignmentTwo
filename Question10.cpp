#include <iostream>
#include <string>

using namespace std;

int main(){
    string username;
    int accountBalance, transactionLimit;
    
    cout<<"Please enter your username: ";
    getline(cin, username);
    
    cout<<"Please enter your account balance: Kshs ";
    cin>>accountBalance;

    //Calculate the transaction limit
    if(accountBalance < 5000 && accountBalance >= 1000){
        transactionLimit = accountBalance * 0.1; //The transaction limit is 10% of the account balance
    }

    else if (accountBalance < 10000 && accountBalance >= 5000) {
        transactionLimit = accountBalance * 0.25; //The transaction limit is 25% of the account balance
    } 
    
    else if (accountBalance < 25000 && accountBalance >= 10000) {
        transactionLimit = accountBalance * 0.3; // The transaction limit is 30% of the account balance
    } 

    else if (accountBalance < 50000 && accountBalance >= 25000) {
        transactionLimit = accountBalance * 0.4; // The transaction limit is 40% of the account balance
    } 

    else if (accountBalance >= 50000) {
        transactionLimit = accountBalance * 0.5; // The transaction limit is 50% of the account balance
    } 
    
    else{
        cout<<"Declined! "<<username<<"'s account balance is too low "<<endl;
    }

    // Display the transaction limit
    cout<<username<<"'s transaction limit is: Kshs "<<transactionLimit<<endl;

    return 0;
}