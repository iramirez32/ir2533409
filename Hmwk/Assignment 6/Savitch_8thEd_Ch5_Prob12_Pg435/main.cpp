/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 24, 2014, 6:13 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants
const int Numofplt=4;

//Function Prototypes
void input (int a[4], int lstplntnum);
void get_tot(int& sum);

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    int prdction[4][Numofplt];
    
    cout<<"This program displays a graph showing\n"<<
            "production for each plant in the company."<<endl;  
    //Function calls
    input(prdction, Numofplt);
    
return 0;
}
//Define Functions
void input(int a[4],int lstplntnum){
    for(int plntnum=1;plntnum<=lstplntnum;plntnum++){
        cout<<endl<<"Enter production data for plant number "<<plntnum<<endl;
        get_tot(a[plntnum-1]);
    }
}
void get_tot(int& sum){
    cout<<"Enter number of units produced by each department.\n"<<
            "Enter four values only."<<endl;
    sum=0;
    int next;
    while (next<=prdction){
        cin>>next;
        sum=sum+next;
    }
    cout<<"The total = "<<sum<<endl;
}