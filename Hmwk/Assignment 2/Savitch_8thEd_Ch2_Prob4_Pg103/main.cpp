/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 29, 2014, 1:49 PM
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
    const float payInc = .076; //Percent of pay increase
    float oldSal, //Old annual salary
        Xmnths,   //Number of months that pay is increased
        OmonSal,  //Total old salary for X months
        Sal_dif,  //Salary difference
        monSal,   //New total salary for X months
        newSal;   //New annual salary
    
    cout<<"Enter the amount of your current salary: ";
    cin>>oldSal;
    cout<<"How many months will you receive the pay increase?\n";
    cout<<"Note you can only input a number less than 12.\n";
    cin>>Xmnths;
    //Calculations
    OmonSal=(oldSal/12)*Xmnths;
            
    cout<<"With your current salary, you would receive\n";  
    cout<<OmonSal<<" in total in "<<Xmnths<<" months.\n";
    //Calculations
    Sal_dif=OmonSal*payInc;
    monSal=OmonSal+Sal_dif;
    
    cout<<"With the 7.6% pay increase retroactive for "<<Xmnths<<endl;
    cout<<"months, you will receive "<<Sal_dif<<"\n";
    cout<<"extra in total for those "<<Xmnths<<" months.\n";
    cout<<"Meaning that your new total income for\n";
    cout<<Xmnths<<" months is: "<<monSal<<".\n";
    cout<<"In other words "<<(monSal/Xmnths)<<" per month, for "<<Xmnths<<
            " months.\n";
    //Calculations
    newSal=monSal+(oldSal-OmonSal);
    
    cout<<"Your new annual income would then total to \n";
    cout<<newSal<<" with the "<<Xmnths<<" month pay increase.\n";

    //End Here!
    return 0;
}

