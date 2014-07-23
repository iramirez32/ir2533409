/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 23, 2014, 12:22 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
float PtoKG=0.453592; //Pound to kilogram conversion
float OtoG=28.3495;   //Ounce to gram conversion

//Function Prototypes
void input (float&, float&);
void calc (float&, float&, float&, float&);
void output (float&, float&);

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    float   pounds, //Pounds input
            ounces, //Ounces input
            kiloG,  //Kilograms output
            grams;  //Grams output
    char    ans;    //Answer to loop
    
    do
    {
        cout<<fixed<<setprecision(2);
        //Function calls
        input (pounds, ounces);
        calc (pounds, ounces, kiloG, grams);
        output (kiloG, grams);
        cout<<endl;
        cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
        cin>>ans;
        //Answer to loop
    }while (ans=='Y'||ans=='y');

    return 0;
}
//Function definitions
void input (float &pounds, float &ounces){
    //Input weight in pounds and ounces
    cout<<"Enter amount of pounds and ounces."<<endl;
    cout<<"Pounds: ";
    cin>>pounds;
    cout<<"Ounces: ";
    cin>>ounces;
}
void calc (float &pounds, float &ounces, float &kiloG, float &grams){
    //Calculations/conversions
    kiloG=pounds*PtoKG;
    grams=ounces*OtoG;
}
void output (float &kiloG, float &grams){
    //Output weight in kilograms and grams
    cout<<"Your converted weight: "<<endl;
    cout<<"Kilograms: "<<kiloG<<endl;
    cout<<"Grams: "<<grams<<endl;
}

