#include <iostream>
#include <string>

using namespace std;

int main() {
    int days;
    string bookType;
    int fine;

    // Input the number of days late and the type of the book (e.g., regular, children's, or reference)
    cout << "Enter the type of the book (e.g., novel, storybook, or reference): ";
    getline(cin, bookType);
    
    cout << "Enter the number of days that the book is late: ";
    cin >> days;


    // Calculate the fine based on the number of days the book is late by and the book type
    if (bookType == "novel") {
        if (days <= 10) {
            fine = days * 10; //Kshs 10 per day, for upto 10 days
        } else {
            fine = 10 * 10 + ((days - 10) * 20); //Kshs 10 for the first 10 days, Kshs 20 per day after that
        }
    }

    else if (bookType == "storybook") {
        if (days <= 10) {
            fine = days * 5; //Kshs 5 per day, for upto 10 days
        } 
         else {
            fine = 10 * 5 + (days - 7) * 10; //Kshs 5 for the first 10 days, Kshs 10 per day after that
        }
    }
    
    else if (bookType == "referenceBook") {
     if (days <= 10) {
            fine = days * 20; //Kshs 20 per day, for upto 10 days
        } 
         else {
            fine = 10 * 20 + (days - 7) * 30; //Kshs 20 for the first 10 days, Kshs 30 per day after that
        }
    }
    
    else {
        cout << "Invalid book type. Please enter Novel, Storybook or Reference Book" << endl;
        return 1; // Exit with an error code
    }

    // Display the calculated fine
    cout << "The total fine for the book is: Kshs " << fine << endl;

    return 0;
}
