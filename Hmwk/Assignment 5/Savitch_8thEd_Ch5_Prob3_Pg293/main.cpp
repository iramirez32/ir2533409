/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 22, 2014, 7:18 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void input(int&, int&, int&, int&);
void procss(int&, int&, int&, int&);
void output(int&, int&);
//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    int HRin=0, //Hour of arrival
        Min=0,  //Minute of arrival
        HRwte=0,//Hours of waiting time
        Minwte; //Minutes of waiting time
    char ans;   //Answer to loop
    
    do
    {
    //Function calls
    input (HRin, Min, HRwte, Minwte);
    procss (HRin, Min, HRwte, Minwte);
    output (HRwte, Minwte);
    
    cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
    cin>>ans;
    } while (ans=='Y'||ans=='y');
    
    return 0;
}
//Function definitions
void input (int &HRin,int &Min,int &HRwte,int &Minwte){
    cout<<"Enter time of arrival in 24-hour notation: "<<endl;
    cout<<"Hour: ";
    cin>>HRin;
    cout<<"Min: ";
    cin>>Min;
    cout<<"Enter the waiting time in 24-hour notation: "<<endl;
    cout<<"Hour: ";
    cin>>HRwte;
    cout<<"Min: ";
    cin>>Minwte;
}
void procss (int &HRin,int &Min,int &HRwte,int &Minwte){
    //Calculations for 12-hour notation
    HRwte=(HRin+HRwte)-12;
    Minwte=Min+Minwte;
    if(Minwte>=60){
        Minwte=Minwte-60;
        HRwte=HRwte+1;
    }else{
        cout<<endl;
    }   
}
void output (int &HRwte, int &Minwte){
    cout<<"Time in 12-Hour notation that it will be after wait-time: "<<endl;
    cout<<"Hour: "<<HRwte<<endl;
    cout<<"Min: "<<Minwte<<endl;
}
