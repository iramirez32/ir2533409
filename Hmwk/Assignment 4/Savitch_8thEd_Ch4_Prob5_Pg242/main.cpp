/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 8:08 PM
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
            infRate,//Inflation Rate
            newPrc2,//New price within a year
            newPrc3;//New price within two years
    
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
    infRate=((newPrc-oldPrc)/oldPrc); //Inflation rate as percentage
    
    //Output results
    cout<<"The calculated inflation rate in percentage: "<<(infRate*100)<<"%"
            <<endl;
    
    //Additional calculations
    cout<<fixed<<setprecision(2)<<endl;
    newPrc2=(newPrc)+(newPrc*infRate); //New price within a year
    newPrc3=(newPrc2)+(newPrc2*infRate);//New price within two years
    cout<<"Estimated price for the item within one year: $"<<newPrc2<<endl;
    cout<<"Estimated price for the item within two years: $"<<newPrc3<<endl;
    
    cout<<"Would you like to repeat the program? Enter 'Y' for yes."<<endl;
    cin>>ans;
    } while (ans=='Y'||ans=='y');
      cout<<"Good-bye!"<<endl;
    
    //End Here.
    return 0;
}

