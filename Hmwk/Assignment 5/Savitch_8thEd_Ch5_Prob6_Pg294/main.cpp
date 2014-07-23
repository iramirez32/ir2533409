/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 22, 2014, 8:55 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Defined Libraries

//Global Constants
float FtoM=0.3048; //Amount of meters in one foot
float ItoC=2.54;   //Amount of centimeters in one inch

//Function Prototypes
void input (float&, float&);
void calc (float&, float&, float&, float&);
void output (float&, float&);

//Execute Here.
int main(int argc, char** argv) {
  float Feet,  //Length in feet
        Inches,//Length in inches
        Meters,//Length in meters
        Cntmtr;//Length in centimeters
  char  ans;   //Answer to loop
    
  do
  {
    cout<<fixed<<setprecision(2);
    //Function calls
    input (Feet, Inches);
    calc (Feet, Inches, Meters, Cntmtr);
    output (Meters, Cntmtr);
    cout<<endl;
    //Answer to loop
    cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
    cin>>ans;
  }while (ans=='Y'||ans=='y');
    return 0;
}
void input (float &Feet,float &Inches){
    //Input in feet and inches
    cout<<"Enter the length in feet and inches."<<endl;
    cout<<"Feet: ";
    cin>>Feet;
    cout<<"Inches: ";
    cin>>Inches; 
}
void calc (float &Feet,float &Inches,float &Meters,float &Cntmtr){
    //Calculations and conversions
    Meters=Feet*FtoM;
    Cntmtr=Inches*ItoC;  
}
void output (float &Meters,float &Cntmtr){
    //Output the results in meters and centimeters
    cout<<"The new length in meters and centimeters is:"<<endl;
    cout<<"Meters: "<<Meters<<endl;
    cout<<"Centimeters: "<<Cntmtr<<endl;
}
