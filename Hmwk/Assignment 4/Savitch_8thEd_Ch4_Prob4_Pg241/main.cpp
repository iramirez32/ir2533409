/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 7:36 PM
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
    float oldPrc,   //Old price from a year ago
            newPrc, //New or present price from today
            infRate;//Inflation Rate
    char    ans;    //Answer to loop
    
    do
    {
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Enter the old price of an item from one year ago: $";
    cin>>oldPrc;
    cout<<" "<<endl;
    cout<<"Enter the new price of the same item from today: $";
    cin>>newPrc;
    
    //Calculations
    cout<<fixed<<setprecision(1)<<endl;
    infRate=((newPrc-oldPrc)/oldPrc)*100; //Inflation rate as percentage
    
    //Output results
    cout<<"The calculated inflation rate in percentage: "<<infRate<<"%"<<endl;
    cout<<"Would you like to repeat the program? Enter 'Y' for yes."<<endl;
    cin>>ans;
    } while (ans=='Y'||ans=='y');
      cout<<"Good-bye!"<<endl;
    
    //End Here.
    return 0;
}

