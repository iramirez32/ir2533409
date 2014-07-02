/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 1, 2014, 5:12 PM
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
//Define Variables
    float Nscr, //Arbitrary number of scores
            urPts, //Number of points you scored on assignment
            totPts, //Total points possible from assignment
            count, //Controls the number of times loop is repeated
            urSum=0, //Sum of your points
            totSum=0;//Sum of total available points
    
    float tPrct; //Total percent of scores
    
    cout<<"How many exercises to input? ";
    cin>>Nscr;
    //Additional modification
    //Without it, loop runs (1+Nscr) amount of times
    Nscr=Nscr-1;
    while (count++<=Nscr)
    {     
        cout<<"Score received for exercise: ";
        cin>>urPts;
        cout<<"Total points possible for exercise: ";
        cin>>totPts; 
        
    //Calculations
    urSum=urSum+urPts;  //Sum of points scored on assignments
    totSum=totSum+totPts;//Sum of total points possible
    tPrct=(urSum/totSum)*100;
       
    }
    
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"Your total is "<<urSum<<" out of "<<totSum<<"."<<endl;
    cout<<"Or in other words "<<tPrct<<"%.";
    
    return 0;
}

