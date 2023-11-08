#include <iostream>
#include <string>

using namespace std;

int main(){
    int grade;
    string fullname;
    int opt;

    // Input student's full name
    cout << "Enter the student's fullname: ";
    getline(cin, fullname);
    
    // Input student's grade
    cout << "Enter the student's grade: ";
    cin >> grade;

    cout<<"\n1. 70 and above\n2. 60 - 69\n3.50 - 59\n4.40 - 49 \n5. Below 40\n6.Invalid Score"<<endl<<endl;
    cout<<"Please select the student's grade (eg. 1, 2, 3 etc....)"<<endl;
    cin>>opt;

    switch(opt){
    case 1:
        cout << fullname << " has scored a Grade A";
        break;

   case 2:
        cout << fullname << " has scored a Grade B";
        break;

    case 3:
        cout << fullname << " has scored a Grade C";
        break;
    
    case 4:
        cout << fullname << " has scored a Grade D";
        break;
    
    case 5:
        cout << fullname << " has scored a Grade F";
        break;
    
    case 6:
        cout<<"Invalid score. Please input a number between 0 - 100";    
   }
   
   return 0; 
}