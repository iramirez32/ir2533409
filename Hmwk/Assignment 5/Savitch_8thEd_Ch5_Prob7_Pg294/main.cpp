/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 22, 2014, 9:42 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Defined Libraries


//Global Constants
float MtoF=3.28084; //Amount of meters in one foot
float CtoI=0.393701;//Amount of centimeters in one inch

//Function Prototypes
void input2 (float&, float&);
void calc2 (float&, float&, float&, float&);
void output2 (float&, float&);

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
    input2 (Meters, Cntmtr);
    calc2 (Feet, Inches, Meters, Cntmtr);
    output2 (Feet, Inches);
    cout<<endl;
    //Answer to loop
    cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
    cin>>ans;
  }while (ans=='Y'||ans=='y');
    return 0;
}
void input2 (float &Meters,float &Cntmtr){
    //Input in feet and inches
    cout<<"Enter the length in meters and centimeters."<<endl;
    cout<<"Meters: ";
    cin>>Meters;
    cout<<"Centimeters: ";
    cin>>Cntmtr; 
}
void calc2 (float &Feet,float &Inches,float &Meters,float &Cntmtr){
    //Calculations and conversions
    Feet=Meters*MtoF;
    Inches=Cntmtr*CtoI;  
}
void output2 (float &Feet,float &Inches){
    //Output the results in meters and centimeters
    cout<<"The new length in feet and inches is:"<<endl;
    cout<<"Feet: "<<Feet<<endl;
    cout<<"Inches: "<<Inches<<endl;
}


