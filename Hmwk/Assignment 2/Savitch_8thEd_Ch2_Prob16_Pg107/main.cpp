/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 30, 2014, 10:18 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Defined Libraries


//Global Constants


//Function Prototypes


//Execute Here!
int main(int argc, char** argv) {
    //Define Variables
    double radius, //Radius of sphere
            vm;    //Volume of sphere
    const double 
            PI=3.14159; //Global constant of pi
    
    cout<<"Enter the radius of the sphere: "<<endl;
    cin>>radius;
    
    //Calculations
    vm=(4.0/3.0)*PI*radius*radius*radius;
    
    cout<<"The volume is "<<vm<<endl;
    
    //End Here!
    return 0;
}

