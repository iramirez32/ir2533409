/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 6, 2014, 9:16 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here
int main(int argc, char** argv) {
//Define variables
    float wght,     //Weight of sphere in pounds
            radius, //Radius of sphere in feet
            bForce, //Buoyant force
            vol,    //Volume
            y=62.4;  //Weight of water in lb/ft^3
    
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Enter the weight of the sphere in pounds: ";
    cin>>wght;
    cout<<"Enter the radius of the sphere in feet: ";
    cin>>radius;
    
    //Calculations
    vol=(1.333)*3.14*radius*radius*radius;
    bForce=vol*y;
    
    cout<<"The buoyant force on the sphere is: "<<bForce<<endl;
    
    if (bForce>=wght)
        cout<<"The sphere will float."<<endl;
    if (bForce<wght) 
        cout<<"the sphere will sink."<<endl;
    
   //End Here.
    return 0;
}

