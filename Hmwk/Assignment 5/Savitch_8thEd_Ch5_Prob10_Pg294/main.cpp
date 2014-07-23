/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 23, 2014, 12:41 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
float KGtoP=2.20462; //Kilogram to pounds conversion
float GtoO=0.035274; //Gram to ounce conversion

//Function Prototypes
void input2 (float&, float&);
void calc2 (float&, float&, float&, float&);
void output2 (float&, float&);

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    float   pounds, //Pounds output
            ounces, //Ounces output
            kiloG,  //Kilograms input
            grams;  //Grams input
    char    ans;    //Answer to loop
    
    do
    {
        cout<<fixed<<setprecision(2);
        //Function calls
        input2 (grams, kiloG);
        calc2 (pounds, ounces, kiloG, grams);
        output2 (pounds, ounces);
        cout<<endl;
        cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
        cin>>ans;
        //Answer to loop
    }while (ans=='Y'||ans=='y');

    return 0;
}
//Function definitions
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

