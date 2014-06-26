/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 25, 2014, 5:30 PM
 */
#include <iostream>
using namespace std;

int main( ) {
    
 int Nmofpds = 5, psprpd = 5;
    
    cout <<"Hello!\n";
    cout <<"At this moment we have ";
    cout << Nmofpds;
    cout <<" pods in total.\n";
    cout << "In each pod, we have ";
    cout << psprpd;
    cout <<" peas.\n";
    cout << "If added, the total amount of peas and pods is ";
    cout << Nmofpds + psprpd;
    cout << ".\n";
    cout << "On the other hand, if these values are multiplied we obtain: ";
    cout << Nmofpds * psprpd;
    cout <<".\n";
            
    cout << "This is the end of the program.\n";

    return 0;
}

