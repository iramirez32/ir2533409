/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 9:33 PM
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
    float   initAB, //Initial account balance
            intRate,//Interest rate
            nMnths, //Number of months
            balnce, //Interest balance due
            balnce2, //Interest balance of subsequent month
            newblnc, //New account balance with interest added
            totblnc; //Interest balances added for total balance due
    

    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Enter initial account balance: $";
    cin>>initAB;
    cout<<"Enter interest rate value in percent: ";
    cin>>intRate;
    cout<<" %"<<endl;
    cout<<"How many months would you like to calculate?"<<endl;
    cin>>nMnths;
    
    //Calculations
    balnce=initAB*(intRate/100);
        
for (int count=0;count<=nMnths;count++){ 
    newblnc=initAB+balnce;
    balnce2=newblnc*(intRate/100);
    totblnc=balnce+balnce2;
}
    //Total interest balance not adding up??
    cout<<"Your total balance of interest due: $"<<totblnc<<endl;
    return 0;
}

