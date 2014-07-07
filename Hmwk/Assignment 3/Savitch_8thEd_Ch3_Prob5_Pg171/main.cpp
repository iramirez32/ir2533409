/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 7, 2014, 11:25 AM
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
//Define variables
    char    day, dum;//Day of the week, and dummy
            
    unsigned short  
            numMin,  //Length of call in minutes
            time;    //Time of the day in 24-hour format
    float
            pBill;   //Phone bill
    
    cout<<"Welcome to the Long-Distance phone cost calculator.\n";      
    cout<<"Enter day of the week call was made: \n";
    cout<<"Mon Tue Wed Thu Fri Sat Sun"<<endl;
    cin>>day>>dum>>dum;
    
    cout<<"Enter the time call was started in military time: "<<endl;
    cin>>setw(2)>>time>>dum>>dum>>dum; //Sets two digits after decimal
    
    cout<<"Enter the length of the call in minutes: "<<endl;
    cin>>numMin;
   
    //Calculations
    if (day=='S'){
        pBill=1.5e-1f*numMin;
    }else if((time>=8)&&(time<18)){
        pBill=4.0e-1f*numMin;
    }else{
        pBill=2.5e-1f*numMin;
    }

    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Total phone bill: $";
    cout<<pBill;

    return 0;
}

