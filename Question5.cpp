#include <iostream>
#include <string>

using namespace std;

int main(){
    //Variable declaration
    double areaCircle, radius;
    double pi = 3.14;
    int areaRectangle, length, width;
    int areaTriangle, base, height;
    int opt;

    cout<<"\n1. Calculate the area of a circle\n2. Calculate the area of a rectangle\n3. Calculate the area of a triangle\n4. Quit"<<endl<<endl;
    cout<<"Please select one of the options above (eg. 1, 2, 3 etc....)"<<endl;
    cin>>opt;

    //Switch Case to select the calculation of your choice
    switch(opt){
    //Calculate area of a circle
    case 1:
        cout <<"Enter the radius: ";
        cin>> radius;
        areaCircle= pi * radius * radius; //Formula for calculating the area of the circle
        cout<<"The area of the circle is: " <<areaCircle;
        break;

    //Calclate area of a rectangle 
   case 2:
        cout <<"Enter the length: ";
        cin>> length;
        cout <<"Enter the width: ";
        cin>> width;
        areaRectangle= length * width; //Formula for calculating the area of the rectangle
        cout<<"The area of the rectangle is: " <<areaRectangle;
        break;

    //Calclate area of a triangle 
    case 3:
        cout <<"Enter the height: ";
        cin>> height;
        cout <<"Enter the base: ";
        cin>> base;
        areaTriangle= 0.5 * base * height; //Formula for calculating the area of the triangle
        cout<<"The area of the triangle is: " <<areaTriangle;
        break;
    
    case 4:
        cout <<"You have quit the program";
        break;

     default:
        cout << "Invalid option. Please select a valid option (1, 2, 3, or 4).";
        break;
   }
   
   return 0; 
}