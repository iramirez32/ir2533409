/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 28, 2014, 11:34 PM
 */
#include <iostream>
using namespace std;
//System Libraries

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here!
int main(int argc, char** argv) {
    //Define Variables
     float wtOunce, //Weight in ounces
            tons,   //Weight in metric tons
            crlBx;   //Number of cereal boxes

    cout<<"Enter the weight of your cereal box\n";
    cout<<"package in ounces: ";
    cin>>wtOunce;
    cout<<"The equivalent weight of your cereal\n";
    cout<<"box package in tons is: ";
    
    tons = wtOunce/35273.92; //Weight in tons
    
    cout<<tons<<".\n";
    cout<<"So, if one cereal box package weighs\n";
    cout<<tons<<" tons, we would need \n";
    
    crlBx= 1/tons; //Number of cereal boxes needed for 1 ton
    
    cout<<crlBx<<" cereal boxes to reach one metric ton.";
            
    
            
    //End Here!        
    return 0;
}

