#include <iostream>
using namespace std;

int main() {
    //variable declaration
    int purchaseAmount;
    double costTotal;

    // Input the purchase amount
    cout << "Enter the purchase amount: Kshs ";
    cin >> purchaseAmount;

    // Calculate the total cost based on purchase amount and apply discounts
    if (purchaseAmount < 500 && purchaseAmount >= 100) {
        costTotal = purchaseAmount;
    } 
    
    else if (purchaseAmount >= 500 && purchaseAmount < 1000) {
        costTotal = purchaseAmount * 0.95; // 5% discount for purchases between Kshs 500 and Kshs 999
    } 
    
    else if (purchaseAmount >= 1000 && purchaseAmount < 1500) {
        costTotal = purchaseAmount * 0.9; // 10% discount for purchases between Kshs 1000 and Kshs 1499
    } 

    else if (purchaseAmount >= 1500 && purchaseAmount < 2000) {
        costTotal = purchaseAmount * 0.85; // 15% discount for purchases between Kshs 1500 and Kshs 1999
    } 
    else if (purchaseAmount >= 2000) {
        costTotal = purchaseAmount * 0.8; // 20% discount for purchases of Kshs 2000 or more
    }

    else{
        cout << "This amount is not eligible for a discount. Please enter another amount." << endl;
        return 1; // Exit with an error code
    }

    // Display the total cost with applied discount
    cout << "The total cost after applying the discount: Kshs " << costTotal << endl;

    return 0;
}
