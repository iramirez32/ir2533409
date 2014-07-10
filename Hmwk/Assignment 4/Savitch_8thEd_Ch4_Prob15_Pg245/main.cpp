/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 10, 2014, 11:12 AM
 */
//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    unsigned short  costT=350, //Cost of twinkie in dollars
             total=0;//Amount inserted
    char     valN=5, //Nickel
             valD=10, //Dime
             valQ=25, //Quarter
            valDlr=100; //Dollar
    char     nickel[7]="nickel",
            dime[5]="dime",
            quarter[8]="quarter",
            dollar[7]="dollar",
            coin[8];
            
    cout<<"Welcome to the Deep-Fried Twinkie vending machine."<<endl;
    cout<<"Price of one deep-fried Twinkie is: $3.50"<<endl;
    cout<<"Enter nickel, dime, quarter, and dollar separately."<<endl;
    cout<<fixed<<setprecision(2)<<endl;
    
    //Loop for coin input
    do
    {
        //Let user enter coin or dollar
        cout<<"Input coin or dollar: ";
        cin>>coin;
        if(!strcmp(coin,nickel))total+=valN;
        else if(!strcmp(coin,dime))total+=valD;
        else if(!strcmp(coin,quarter))total+=valQ;
        else if(!strcmp(coin,dollar))total+=valDlr;
        else{
            cout<<"You've inserted a fake coin!"<<endl;
        }
        cout<<"Total amount so far: $"<<total/100.0f<<endl;
        
    } while (total<costT);
    
    cout<<"Your change is: $"<<(total-costT)/100.0f<<endl;
    cout<<"Enjoy your deep-fried Twinkie!"<<endl;

    return 0;
}

