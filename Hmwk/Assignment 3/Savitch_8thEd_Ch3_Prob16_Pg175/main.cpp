/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 6, 2014, 10:34 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
//Declare variables
    float   tempF, //Temp. in Fahrenheit
            tempC; //Temp. in Celsius
    
    cout<<"Purpose of this program is to decrement the temperature\n"<<
            "starting at 100 degree Celsius and computing its equivalent\n"<<
            "in Fahrenheit until both values match.\n";
    
    //Calculations
    tempC=100;
    tempF=((9*tempC)/5)+32;
    for (tempC=100;tempC=tempF;tempC--)
        cout<<"Temperature in degree Celsius: "<<tempC;
        cout<<"Temperature in degree Fahrenheit: "<<tempF;
    
//End Here.
    return 0;
}

