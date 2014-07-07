/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 6, 2014, 10:34 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
//Declare variables
    int      tempC=100, //Temp. in Fahrenheit
             tempF=((9*tempC)/5)+32; //Temp. in Celsius
    
    cout<<"Purpose of this program is to decrement the temperature\n"<<
            "starting at 100 degree Celsius and computing its equivalent\n"<<
            "in Fahrenheit until both values match.\n";
   
    while (tempC!=tempF){
        tempC--;
         tempF=((9*tempC)/5)+32;
    }
    //Output the results
    cout<<"Temperature in Celsius equals Fahrenheit at "<<tempC<<"."<<endl;
//End Here.
    return 0;
}

