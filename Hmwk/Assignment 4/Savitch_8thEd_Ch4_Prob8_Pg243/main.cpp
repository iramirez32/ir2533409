/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 10, 2014, 12:20 AM
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
    float   hsePrce, //House price
            dwnpmt,  //Down payment for house
            initLB,  //Initial loan balance
            annlMG,  //Annual mortgage cost
            prncple, //Loan principle from initial loan balance
            intrst,  //Interest on initial loan balance
            txsvng,  //Tax savings
            aftrtax; //After tax cost of the house
    char  answr;     //Answer to control loop
    
    do
    {
    cout<<"Enter the total price for the house: $";
    cin>>hsePrce;
    cout<<"Enter the amount of total down-payment for the house: $";
    cin>>dwnpmt;
    
    //Calculations
    initLB=hsePrce-dwnpmt; //Initial loan balance
    prncple=.03*(initLB);  //Principle
    intrst=.06*(initLB);   //Interest
    annlMG=prncple+intrst; //Annual mortgage cost
    txsvng=intrst*.35;     //Tax savings
    aftrtax=annlMG-txsvng; //After tax cost of the house
    
    cout<<"The annual after-tax cost of the new house for first year\n"<<
            "of ownership is: $"<<aftrtax<<endl;
     cout<<"Would you like to repeat the program? Enter 'Y' for yes."<<endl;
     cin>>answr;
     
    } while (answr=='Y'||answr=='y');
    cout<<"Thank you, please come again."<<endl;

    return 0;
}

