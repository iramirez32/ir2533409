/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 25, 2014, 5:30 PM
 */
#include <iostream>
using namespace std;
//System Libraries

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here!
int main( ) {
  
 int Nmofpds = 5, //Number of pods
     psprpd = 5;  //Number of peas per pod
    
    cout <<"Hello!\n";
    cout <<"At this moment we have ";
    
    //Number of pods
    cout << Nmofpds;
    cout <<" pods in total.\n";
    cout << "In each pod, we have ";
    //Number of peas per pod
    cout << psprpd;
    cout <<" peas.\n";
    cout << "If added, the total amount of peas and pods is ";
    //Number of pods + peas per pod
    cout << Nmofpds + psprpd;
    cout << ".\n";
    cout << "On the other hand, if these values are multiplied we obtain: ";
    //Number of pods * peas per pod
    cout << Nmofpds * psprpd;
    cout <<".\n";
            
    cout << "This is the end of the program.\n";
    //End here.
    return 0;
}

