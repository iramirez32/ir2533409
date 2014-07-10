/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 10:31 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants
float   G=6.673e-8; //Universal gravitational constant
//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    float   mass1,  //Mass of object 1 in grams
            mass2,  //Mass of object 2 in grams
            dist,   //Distance between two objects in cm
            Gforce; //Gravitational Force in dynes
    
    cout<<"Enter mass of object 1 in grams: ";
    cin>>mass1;
    cout<<"Enter mass of object 2 in grams: ";
    cin>>mass2;
    cout<<"Enter the distance between them in centimeter: ";
    cin>>dist;
    
    //Calculations
    Gforce=(G*mass1*mass2)/(dist*dist);
    
    //Output Gravitational Force result
    cout<<"The Gravitational Force between these objects = "<<Gforce<<" dynes";

    return 0;
}

