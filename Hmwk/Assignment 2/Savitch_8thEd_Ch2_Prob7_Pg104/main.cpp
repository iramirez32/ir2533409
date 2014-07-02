/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 1, 2014, 7:18 PM
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
    float hrpay=16.78,  //Hourly pay
            ovrt=25.17,  //Overtime hourly pay
            numhrs, //Number of hours worked in a week
            grspy, //Gross pay prior to tax deductions
            socstx,//Social security tax
            fdrtx, //Federal income tax
            sttx,  //State tax
            dpdnts,//Number of dependents
            dpdntx,//Dependent tax if more than 3 dependents
            totpy; //Total take-home pay
    
    cout<<"Enter the number of hours you worked this week: ";
    cin>>numhrs;
    
    if (numhrs<=40)
        grspy=numhrs*hrpay; //Gross pay
    if (numhrs>40)
        grspy=(numhrs-40)*ovrt+(40*hrpay); //Gross pay
    
    cout<<"Your total income prior to taxes is: $"<<grspy<<endl;
    cout<<"How many dependents do you have?"<<endl;
    cin>>dpdnts;
    
    if (dpdnts>=3)
        dpdntx=35.00; //Dependent health insurance deduction
    if (dpdnts<3)
        dpdntx=0;
    
    cout<<fixed<<setprecision(2)<<endl;
    //Calculations
    socstx=grspy*0.06;
    fdrtx=grspy*0.14;
    sttx=grspy*0.05;
    totpy=grspy-socstx-fdrtx-sttx-dpdntx-10; //Net take-home pay
    
                
    cout<<"The following tax deductions are made\n"<<
            "according to your gross pay.\n";
    cout<<"6% of Social Security: $"<<socstx<<endl;
    cout<<"14% of Federal Income Tax: $"<<fdrtx<<endl;
    cout<<"5% of State Income Tax: $"<<sttx<<endl;
    cout<<"Union dues: $10 per week"<<endl;
    cout<<"And if you have more than 3 dependents:\n"<<
            "$35 for health insurance fees.\n";
    
    cout<<"Your total take-home pay: $"<<totpy<<endl;
                
    //End Here.         
    return 0;
}

