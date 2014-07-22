/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 22, 2014, 12:37 PM
 */
//System Libraries
#include <iostream>
#include <ctime>
using namespace std;
//User Defined Libraries

//Global Functions

//Function Prototypes
void input(int&, int&);
int convrsn(int&, int&, int&);
void output(int&, int&, int&, int&);

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    int HRin=0,  //Hour input - set to zero to avoid errors
        Min=0,   //Minute input
        HRout=0, //Hour output
        AMPM=0;  //Output of AM of PM
     
    //Function calls
    input(HRin, Min);  //Input function
    AMPM = convrsn (HRin, Min, HRout); //Conversion function set equal to AMPM
    //AMPM is then defined in output function depending on value
    output (AMPM, HRout, Min, HRin);   //Output function
            
    return 0;
}
//Functions defined
void input(int &HRin, int &Min){
    cout<<"Enter the time in 24-hour notation. "<<endl;
    cout<<"Hour first, then minutes separated by space."<<endl;
    cin>>HRin;
    cin>>Min;  
}
int convrsn(int &HRin, int &Min, int &HRout){
    //If hour over 13 it is set to equal 2, which then equals PM
    //If hour under, then it is equal to 1, which then equals to AM
    if (HRin>=13){
        HRout=HRin-12;
        return 2;
    }else
        return 1;
}    
void output(int &AMPM, int &HRout, int &Min, int &HRin){
    char AM='A', //Local variables
         PM='P';
    //Output results
    if (AMPM==2){
        cout<<"Time in 12-hour notation: "<<endl;
        cout<<"Hour: "<<HRout<<endl;
        cout<<"Min: "<<Min<<endl;
        cout<<PM<<endl;
    }else{
        cout<<"Time in 12-hour notation: "<<endl;
        cout<<"Hour: "<<HRin<<endl;
        cout<<"Min: "<<Min<<endl;
        cout<<AM;
    }
}