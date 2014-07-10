/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 7:06 PM
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
    float   nLit1, //Number of liters of gasoline consumed by car 1
            nMile1,//Number of miles traveled by car 1
            galns1,//Amount of gallons consumed by car 1
            nLit2, //Number of liters of gasoline consumed by car 2
            nMile2,//Number of miles traveled by car 2
            galns2,//Amount of gallons consumed by car 2
            mpg1,  //Miles per gallon for car 1
            mpg2;  //Miles per gallon for car 2
    char    ans;   //Answer to loop
     
    cout<<fixed<<setprecision(2)<<endl;
    do 
    {
        cout<<"Enter amount of liters of gasoline for car 1: "<<endl;
        cin>>nLit1;
        cout<<"Enter the number of miles traveled by car 1: "<<endl;
        cin>>nMile1;
    
        //Calculations
        galns1=nLit1*litperGal; //Amount of gallons converted from liters
        mpg1=(nMile1)/galns1;   //Miles per gallon
        
        cout<<"Enter amount of liters of gasoline for car 2: "<<endl;
        cin>>nLit2;
        cout<<"Enter the number of miles traveled by car 2: "<<endl;
        cin>>nMile2;
        
         //Calculations
        galns2=nLit2*litperGal; //Amount of gallons converted from liters
        mpg2=(nMile2)/galns2;   //Miles per gallon
    
        //Output results
        cout<<"Total miles per gallon (mpg) for car 1: "<<mpg1<<endl;
        cout<<"Total miles per gallon (mpg) for car 2: "<<mpg2<<endl;
        
        //Bigger MPG means better fuel efficiency
        if (mpg1>mpg2){
            cout<<"Car 1 has a better fuel efficiency."<<endl;
        }else
            cout<<"Car 2 has a better fuel efficiency."<<endl;
            
        cout<<"Enter 'Y' for yes if you would like to repeat."<<endl;
        cin>>ans;
    
    } while (ans=='Y'|| ans=='y');
    cout<<"Good-bye!"<<endl;
    
    //End Here.  

    return 0;
}

