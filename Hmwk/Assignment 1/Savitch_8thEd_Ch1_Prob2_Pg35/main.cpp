/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 25, 2014, 1:27 PM
 */
#include <iostream>
using namespace std;
//System Libraries

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here!
int main( ) {
    // Number of pods, peas per pod, total peas
    int Nmofpds, psprpd, totps;
    
    cout <<"Hello!\n";
    cout <<"Press return after entering a number.\n";
    cout <<"Enter the number of pods:\n";
    
    //Input number of pods
    cin >> Nmofpds;
    
    cout << "Enter the number of peas in a pod:\n";
    //Input number of peas per pod
    cin >> psprpd;
    
    //Calculate total peas
    totps = Nmofpds * psprpd;
    cout << "If you have ";
    cout << Nmofpds;
    cout << " pea pods\n";
    cout << "and ";
    cout << psprpd;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totps;
    cout << " peas in all the pods.\n";
    cout << "Good-bye!\n";

    //End Here.
    return 0;
}

