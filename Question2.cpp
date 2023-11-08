#include <iostream>
using namespace std;

int main(){
    string fullname;
    int grade;

    // Input student's full name
    cout << "Enter the student's fullname: ";
    getline(cin, fullname);
    
    // Input student's grade
    cout << "Enter the student's grade: ";
    cin >> grade;

    // Determine the grade based on the score that will be input
    // Range for the grades is 0-100
    if (grade >= 0 && grade <= 100) {
        if (grade >= 70) {
            cout << fullname << " has scored a Grade A";
        }
        else if (grade >= 60) {
            cout << fullname << " has scored a Grade B";
        }
        else if (grade >= 50) {
            cout << fullname << " has scored a Grade C";
        }
        else if (grade >= 40) {
            cout << fullname << " has scored a Grade D";
        }
        else {
            cout << fullname << " has scored a Grade F";
        }
    }
    else {
        cout << "Invalid score. Please enter a score between 0 - 100";
    }

    return 0;
}