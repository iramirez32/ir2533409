/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 25, 2014, 8:40 PM
 */
#include <iostream>
using namespace std;
//System Libraries

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here!
int main(int argc, char** argv) {
    
    //Identify Variables
    double 
        Qts,  //Number of quarters
        Dms,  //Number of dimes
        Nkls, //Number of nickels  
        totQ, //Total amount of quarters    
        totD, //Total amount of dimes
        totN, //Total amount of nickels   
        Tot;  //Total amount in coins 
            
     //Magic formula to keep 2 digits after decimal
    
     cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
     cout.precision(2);
    
    cout << "Hello!\n";
    cout << " Please enter the number of coins you have.\n";
    
    cout << "Number of quarters: ";
    cin >> Qts;
    cout << " Total amount of quarters: $";
    //Number of quarters * value of quarter
    totQ = Qts * .25;
    cout << totQ <<".\n";        
            
    cout << "Number of dimes: ";
    cin >> Dms;
    cout << " Total amount of dimes: $";
    //Number of dimes * value of dime
    totD = Dms * .10;
    cout << totD <<".\n"; 
    
    cout << "Number of nickels: ";
    cin >> Nkls;
    cout << " Total amount of nickels: $";
    //Number of nickels * value of nickel
    totN = Nkls * .05;
    cout << totN <<".\n";
    
    cout << "The total value of your coins is: $ ";
    //Total value of coins
    Tot = totQ + totD + totN;
    
    cout << Tot;
    
    //End Here.
    return 0;
}

