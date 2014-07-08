/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 7, 2014, 10:45 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    float apprPi1=1;  //Approx. value of Pi
    int   nterm=1000; //number of times
    
    cout<<"Welcome to the PI Approximation Program."<<endl;
    
    //Loop to calculate approx. Pi.
    for (int i=3;i<=nterm/2;i+=4){
        apprPi1+=(-1.0f/i+1.0f/(i+2));
    }
    //Calculations
    apprPi1*=4;
    //Output the results
    cout<<"Approximate Pi utilizing infinite sequence = "<<
            apprPi1<<" with "<<nterm<<" terms."<<endl;
 
    
            
    return 0;
}

