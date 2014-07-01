/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 29, 2014, 1:49 PM
 */
#include <iostream>
#include <iomanip>
using namespace std;
//System Libraries

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here!
int main(int argc, char** argv) {
    //Define Variables
    const float payInc =7.6e-2f; //Percent of pay increase
    float oldSal, //Old annual salary
        Xmnths,   //Number of months that pay is increased
        OmonSal,  //Old monthly salary for X months
        retPay,   //Retroactive pay
        monSal,   //New monthly salary for X months
        newSal;   //New annual salary
    
    cout<<"Enter the amount of your current salary: $";
    cin>>oldSal;
    cout<<"How many months will you receive the pay increase?\n";
    cin>>Xmnths;
    //Calculations
    cout<<fixed<<setprecision(2)<<endl; //Fixed 2 digits after decimal
     OmonSal=(oldSal/12); //Old monthly salary
     newSal=oldSal*(1+payInc);   //New annual salary
     retPay=oldSal*payInc*(Xmnths/12); //Retroactive pay
     monSal=(newSal/12); //New monthly salary
     
    //Output results
     cout<<"Your old monthly salary was: $"<<OmonSal<<endl;
     cout<<"Your retroactive pay: $"<<retPay<<endl;
     cout<<"Your new monthly salary is: $"<<monSal<<endl;
     cout<<"Your new annual salary is: $"<<newSal<<endl;
 
    //End Here!
    return 0;
}

