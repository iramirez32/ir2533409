/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 6:28 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
float  litperGal = 0.264179; //Liter conversion to gallons

//Function Prototypes

//Execute Here
int main(int argc, char** argv) {
    //Declare variables
    float   nLit, //Number of liters of gasoline consumed by car
            nMile,//Number of miles traveled by car
            galns,//Amount of gallons consumed by car
            mpg;  //Miles per gallon
    char    ans;  //Answer to loop
    
    cout<<fixed<<setprecision(2)<<endl; 
    do 
    {
        cout<<"Please enter the amount of liters of gasoline: "<<endl;
        cin>>nLit;
        cout<<"Please enter the number of miles traveled: "<<endl;
        cin>>nMile;
    
        //Calculations
        galns=nLit*litperGal; //Amount of gallons converted from liters
        mpg=nMile/galns;      //Miles per gallon
    
        //Output results
        cout<<"Total miles per gallon (mpg): "<<mpg<<endl;
        cout<<"Enter 'Y' for yes if you would like to repeat."<<endl;
        cin>>ans;
    
    } while (ans=='Y'|| ans=='y');
    cout<<"Good-bye!"<<endl;
    
    //End Here.  
    return 0;
}

