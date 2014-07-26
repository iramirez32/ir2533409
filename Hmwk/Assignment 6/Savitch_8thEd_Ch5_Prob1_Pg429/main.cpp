/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 25, 2014, 8:44 PM
 */
//System Libraries
#include <iostream>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void graph ();

//Execute Here
int main(int argc, char** argv) {
    string month[12]={"January", "February","March","April","May","June","July"
            ,"August","September","October","November","December"};
    int     avg[12], //Average rainfall per month
            actl[12],//Actual rainfall per month
            difrnce; //Difference between average and actual
    int     MAX=200,
            array[MAX][12];
    
    //Inputs
    cout<<"Please enter the average rainfall for each month: "<<endl;
    for(int i=0;i<12;i++){
        cout<<month[i]<<": ";
        cin>>avg[i];
    }
    
    cout<<"Please enter the actual rainfall for each month: "<<endl;
    for(int i=0;i<12;i++){
        cout<<month[i]<<": ";
        cin>>actl[i];
    }
    
    cout<<"The difference between averages and actuals: "<<endl;
    for(int i=0;i<12;i++){
        cout<<month[i]<<"'s difference: ";
        cout<<actl[i]-avg[i]<<endl;
    }
    //Function calls
    graph ();
    

    return 0;
}
void graph(){
    cout<<"Average Rainfall Graph."<<endl;
    for(int i=0; i<12;i++){
        cout<<month[i]<<" *"<<endl;
    }
    
}

