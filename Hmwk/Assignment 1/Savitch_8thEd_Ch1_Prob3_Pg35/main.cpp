/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 25, 2014, 2:11 PM
 */
#include <iostream>
using namespace std;

int main( ) {
    
    int Nmofpds, psprpd, totps;
    
    cout <<"Hello!\n";
    cout <<"Press return after entering a number.\n";
    cout <<"Enter the number of pods:\n";
    
    cin >> Nmofpds;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> psprpd;
    totps = Nmofpds / psprpd;
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


    return 0;
}

