/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 10, 2014, 12:57 AM
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
    float  hght,    //Height of user
            wght,   //Weight of user
            age,    //Age of user
            hatsze, //Hat size
            jcktsze,//Jacket size
            waist;  //Waist in inches
    char    ans;    //Answer of loop
    
    do
    {
    cout<<"Enter your height in inches: ";
    cin>>hght;
    cout<<"Enter your weight in pounds: ";
    cin>>wght;
    cout<<"What is your age? ";
    cin>>age;
    
    cout<<fixed<<setprecision(2)<<endl;
    //Calculations
    hatsze=(wght/hght)*2.9; //Hat size
    cout<<"Your hat size is: "<<hatsze<<endl;
    
    //Calculations for jacket size
    if (age>=30){
        float addAge; //Calculates additional tenths of years over 30
        addAge=(age/10)-3;
        //Add 1/8 of an inch per every 10 years over 30
        jcktsze=((hght*wght)/288)+(1/8)*addAge;   
    }else
       jcktsze=((hght*wght)/288); 
    cout<<"Your jacket size measured at chest in inches is: "<<jcktsze<<endl;
    
    //Calculations for waist size
    if (age>=28){
        float addAge2; //Calculate additional pair of years over 28
        addAge2=(age-28)/2;
        waist=(wght/5.7)+(1/10)*addAge2;
    }else
        waist=(wght/5.7); //Waist in inches if below 22
    cout<<"Your waist size in inches is: "<<waist<<endl;
    
    cout<<"Would you like to try again? Enter 'Y' for yes.\n";
    cin>>ans;
    }while (ans=='Y'||ans=='y');
    cout<<"Thank you and bye-bye."<<endl;
    
    //End Here.
    return 0;
}

