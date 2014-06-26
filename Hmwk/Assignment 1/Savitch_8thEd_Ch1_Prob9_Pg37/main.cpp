/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 26, 2014, 11:50 AM
 */
#include <iostream>
using namespace std;
//System Libraries

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short time, dist;
    //Time in sec, distance in ft
    
   cout<< "In this exercise, we are going to calculate\n";
   cout<<"the distance an object would drop under a\n";
   cout<<"certain amount of time, with a constant\n";
   cout<<"free-fall acceleration of 32 feet per second.\n";
   cout<<"Assume the object starts at rest and there is\n";
   cout<<"no friction or resistance from air.\n";
   cout<<"Please enter a time in seconds: \n";
   cin>>time;
   cout<<"The distance this object would travel is: ";
    //Calculate the distance traveled in ft
   dist=((32*time*time)/2);cout<<dist<<" feet."; 
           
   //End Here!
    return 0;
}

