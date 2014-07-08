/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 7, 2014, 10:45 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    float pi, //Approx. value of Pi
            n, //number of times
            nvalue; //Value of n times
    
    cout<<"Welcome to the PI Approximation Program."<<endl;
    cout<<"Enter a value for 'n': ";
    cin>>n;
    
    //Calculations
    nvalue=((-1)pow(n))/(2*n+1);
    pi=4*nvalue;
    
    cout<<"Approximate value for 'pi': ";
    cout<<pi;
            

    return 0;
}

