/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 23, 2014, 12:55 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
float KGtoP=2.20462; //Kilogram to pounds conversion
float GtoO=0.035274; //Gram to ounce conversion
float PtoKG=0.453592;//Pound to kilogram conversion
float OtoG=28.3495;  //Ounce to gram conversion

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
    //Declare variables
    float   pounds, //Pounds 
            ounces, //Ounces
            kiloG,  //Kilograms 
            grams;  //Grams 
    char    ans,    //Answer to loop
            choice; //Conversion choice
    
    do
    {
        cout<<fixed<<setprecision(2);
        //Input conversion choice
        cout<<"Enter '1' for a pound/ounce conversion to gram/kilogram."<<endl;
        cout<<"Enter '2' for a gram/kilogram conversion to pound/ounce."<<endl;
        cin>>choice;
        //Function calls
        if (choice=='1'){
            chce1 (pounds, ounces, kiloG, grams);
        } else if (choice=='2'){
            chce2 (pounds, ounces, kiloG, grams);
        }
        cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
        cin>>ans;
        //Answer to loop
    }while (ans=='Y'||ans=='y');

    return 0;
}
//Function definitions
void chce1 (float &pounds, float &ounces, float &kiloG, float &grams){
    input (pounds, ounces);
    calc (pounds, ounces, kiloG, grams);
    output (kiloG, grams);
}
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
void chce2 (float &pounds, float &ounces, float &kiloG, float &grams){
    input2 (grams, kiloG);
    calc2 (pounds, ounces, kiloG, grams);
    output2 (pounds, ounces);
}
void input2 (float &grams, float &kiloG){
    //Input weight in grams and kilograms
    cout<<"Enter amount of kilograms and grams."<<endl;
    cout<<"Kilograms: ";
    cin>>kiloG;
    cout<<"Grams: ";
    cin>>grams;
}
void calc2 (float &pounds, float &ounces, float &kiloG, float &grams){
    //Calculations/conversions
    pounds=kiloG*KGtoP;
    ounces=grams*GtoO;
}
void output2 (float &pounds, float &ounces){
    //Output weight in pounds and ounces
    cout<<"Your converted weight: "<<endl;
    cout<<"Pounds: "<<pounds<<endl;
    cout<<"Ounces: "<<ounces<<endl;
}