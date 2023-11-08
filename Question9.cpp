#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movieType;
    int ticketPrice = 0; // Initialize the ticket price to 0

    // Input the age of the customer
    cout << "Enter the customer's age: ";
    cin >> age;
        
    cout << "Enter the type of movie (Regular or 3D): ";
    cin.ignore(); // Use cin.ignore to clear the newline character
    getline(cin, movieType);

    // Calculate the ticket price based on the age of the customer and the type of movie (Regular or 3D).
    if (movieType == "Regular") {
        if (age <= 10) {
            ticketPrice = 500; // Ticket price for customers who are 10 years old or younger
        } else if (age >= 11 && age <= 17) {
            ticketPrice = 500 + 250; // Ticket price for customers who are between 11 and 17 years old
        } else if (age >= 18) {
            ticketPrice = 500 + 500; // Ticket price for customers who are 18 years old or older
        }
    } else if (movieType == "3D") {
        if (age <= 10) {
            ticketPrice = 750; // Ticket price for customers who are 10 years old or younger
        } else if (age >= 11 && age <= 17) {
            ticketPrice = 750 + 500; // Ticket price for customers who are between 11 and 17 years old
        } else if (age >= 18) {
            ticketPrice = 750 + 750; // Ticket price for customers who are 18 years old or older
        }
    } else {
        cout << "Invalid movie type. Please enter Regular or 3D" << endl;
        return 1; // Exit with an error code
    }

    // Display the ticket price
    cout << "Please pay Kshs " << ticketPrice << " for your " << movieType << " movie." << endl;

    return 0;
}