#include <iostream>
#include <string>

using namespace std;

// Define an enum class for credit status
/*enum is a data type consisting of named values 
like elements, members, etc., that represent integral constants. */
enum class CreditStatus {
    GOOD, BAD
};

class Customer {
public:
    // Member variables
    string name;
    int age;
    int balance;
    CreditStatus credStatus;
    int months;

    // Method to check loan qualification
    bool QualifiedForLoan() {
        // Check age, balance, credit status, and months
        if (age <= 22) {
            return false;
        }

        if (balance <= 50000) {
            return false;
        }

        if (credStatus != CreditStatus::GOOD) {
            return false;
        }

        if (months < 6) {
            return false;
        }

        return true;
    }
};

int main() {
    //This is an instance of the class customer
    Customer customer;

    // Input customer's name
    cout << "Enter customer's full name: ";
    cin.ignore(); // Clear the newline character from the previous input
    getline(cin, customer.name);


    // Input customer's age
    cout << "Enter customer's age: ";
    cin >> customer.age;

    // Input customer's bank balance
    cout << "Enter customer's bank balance: Ksh ";
    cin >> customer.balance;

    cin.ignore(); // Clear the newline character

    // Input customer's CRB Status
    cout << "Enter customer's CRB status (Good/Bad): ";
    string credStatusStr;
    cin >> credStatusStr;

    // Convert the input to the corresponding enum value
    if (credStatusStr == "Bad" || credStatusStr == "BAD") {
        customer.credStatus = CreditStatus::BAD;
    } else {
        customer.credStatus = CreditStatus::GOOD;
    }

    // Input the customer's duration in months
    cout << "Enter the customer's duration in months: ";
    cin >> customer.months;

    // Check if the customer is qualified for a loan
    if (customer.QualifiedForLoan()) {
        cout << customer.name << " is qualified for a loan." << endl;
    } else {
        cout << customer.name << " is not qualified for a loan." << endl;
    }

    return 0;
}
