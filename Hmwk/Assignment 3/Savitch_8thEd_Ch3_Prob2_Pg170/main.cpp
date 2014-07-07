/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 6, 2014, 7:57 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
//Define variables
    float   actblnc, //Account balance
            intrst,  //Interest
            totdue,  //Total amount due
            count=0;
    
    cout<<fixed<<setprecision(2)<<endl;
    
    for (count=0;count<=10;count++)
    {
    cout<<"Enter the amount of your account balance: $";
    cin>>actblnc;
    {
    if (actblnc<=1000)
        intrst=actblnc*0.015;
    if (actblnc>1000)
        intrst=(1000*.015)+(actblnc-1000)*0.01;
    }
    cout<<"Your total interest rate is: $"<<intrst<<endl;
    {
    if (intrst<=10)
        totdue=intrst;
    if (intrst>10)
        totdue=intrst*.10;
    }
    cout<<"Minimum amount due: $"<<totdue<<endl;
    }
    //End Here.
    return 0;
}

