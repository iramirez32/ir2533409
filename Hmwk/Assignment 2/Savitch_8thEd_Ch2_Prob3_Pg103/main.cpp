/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 29, 2014, 12:28 PM
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
        OmonSal,//Total old salary for 6 months
        Sal_dif,//Salary difference
        monSal, //New total salary for 6 months
        newSal; //New annual salary
    
    cout<<"Enter the amount of your current salary: ";
    cin>>oldSal;
    //Calculations
    OmonSal=(oldSal/12)*6;
            
    cout<<"With your current salary, you would receive\n";  
    cout<<OmonSal<<" in total in 6 months.\n";
    //Calculations
    Sal_dif=OmonSal*payInc;
    monSal=OmonSal+Sal_dif;
    
    cout<<"With the 7.6% pay increase retroactive for 6\n";
    cout<<"months, you will receive "<<Sal_dif<<"\n";
    cout<<"extra in total for those 6 months.\n";
    cout<<"Meaning that your new total income for\n";
    cout<<"6 months is: "<<monSal<<".\n";
    cout<<"In other words "<<(monSal/6)<<" per month, for 6 months.\n";
    //Calculations
    newSal=monSal+OmonSal;
    
    cout<<"Your new annual income would then total to \n";
    cout<<newSal<<" with the 6 month pay increase.\n";

    //End Here!
    return 0;
}

