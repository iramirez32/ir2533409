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
    unsigned short 
        Qts,  //Number of quarters
        Dms,  //Number of dimes
        Nkls, //Number of nickels  
        totQ, //Total amount of quarters    
        totD, //Total amount of dimes
        totN, //Total amount of nickels   
        Tot;  //Total amount in coins 
            
    
    cout << "Hello!\n";
    cout << " Please enter the number of coins you have.\n";
    
    cout << "Number of quarters: ";
    cin >> Qts;
    cout << " Total amount of quarters: ";
    //Number of quarters * value of quarter
    totQ = Qts * 25;
    cout << totQ <<" cents.\n";        
            
    cout << "Number of dimes: ";
    cin >> Dms;
    cout << " Total amount of dimes: ";
    //Number of dimes * value of dime
    totD = Dms * 10;
    cout << totD <<" cents.\n"; 
    
    cout << "Number of nickels: ";
    cin >> Nkls;
    cout << " Total amount of nickels: ";
    //Number of nickels * value of nickel
    totN = Nkls * 5;
    cout << totN <<" cents.\n";
    
    cout << "The total value of your coins is: ";
    //Total value of coins
    Tot = totQ + totD + totN;
    
    cout << Tot;
    cout <<" cents.\n";
    
    //End Here.
    return 0;
}

