#include <iostream>
 
using namespace std;
 
int main(){
 
    //Variable declaration
   int num1, num2;
 
    //Input two numbers mum 1 and num 2
    cout<<"Enter two numbers to find maximum number: "<<endl;
    cin>>num1;
    cin>>num2;
 
    //Switch case to check for the maximum number
    switch(num1 > num2){
      case 0: 
      cout<<"The maximum number is: "<<num2;
      break;
 
      case 1: 
      cout<<"The maximum number is: "<<num1;
      break;
    }
 
    return 0;
 
}