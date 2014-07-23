/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 22, 2014, 11:45 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Defined Libraries

//Global Constants
float FtoM=0.3048;  //Amount of meters in one foot
float ItoC=2.54;    //Amount of centimeters in one inch
float MtoF=3.28084; //Amount of meters in one foot
float CtoI=0.393701;//Amount of centimeters in one inch

//Function Prototypes
void chce1 (float&, float&, float&, float&);
void input (float&, float&);
void calc (float&, float&, float&, float&);
void output (float&, float&);
void chce2 (float&, float&, float&, float&);
void input2 (float&, float&);
void calc2 (float&, float&, float&, float&);
void output2 (float&, float&);

//Execute Here.
int main(int argc, char** argv) {
  float Feet,  //Length in feet
        Inches,//Length in inches
        Meters,//Length in meters
        Cntmtr;//Length in centimeters
  char  ans,   //Answer to loop
        choice;//Conversion choice
    
  do
  {
    cout<<fixed<<setprecision(2);
    //Input choice
    cout<<"Press '1' if you want to convert from Feet/Inches to Meters/"<<
            "Centimeters."<<endl;
    cout<<"Press '2' if you want to convert from Meters/Centimeters to"<<
            " Feet/Inches."<<endl;
    cin>>choice;
    //Function calls
    if (choice=='1'){
        chce1 (Feet, Inches, Meters, Cntmtr);
    }else if (choice=='2'){
        chce2 (Feet, Inches, Meters, Cntmtr);
    }
    //Answer to loop
    cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
    cin>>ans;
  }while (ans=='Y'||ans=='y');
    return 0;
}
void chce1 (float &Feet,float &Inches,float &Meters,float &Cntmtr){
    input (Feet, Inches);
    calc (Feet, Inches, Meters, Cntmtr);
    output (Meters, Cntmtr);
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


void chce2 (float &Feet,float &Inches,float &Meters,float &Cntmtr){
    input2 (Meters, Cntmtr);
    calc2 (Feet, Inches, Meters, Cntmtr);
    output2 (Feet, Inches);
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