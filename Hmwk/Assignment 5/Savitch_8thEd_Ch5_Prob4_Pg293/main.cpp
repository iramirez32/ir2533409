/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 22, 2014, 7:50 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void scores (int&, int&, int&, int&);
void avg (float&, int&, int&, int&, int&);
void std_dev (float&, float&, int&, int&, int&, int&);

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    int     num1, //Score 1
            num2, //Score 2
            num3, //Score 3
            num4; //Score 4
    float   a,    //Average
            stdev;//Standard deviation
    char    ans;  //Answer to loop
    
    do
    {
    //Function calls
    scores (num1, num2, num3, num4);
    avg (a, num1, num2, num3, num4);
    std_dev (stdev, a, num1, num2, num3, num4);
    
    cout<<"Would you like to repeat? Enter 'Y' for yes."<<endl;
    cin>>ans;
    //Answer to loop
    }while (ans=='Y'||ans=='y');
    
    return 0;
}
void scores (int &num1, int &num2, int &num3, int &num4){
    //Inputs of all scores
    cout<<"Enter four scores:"<<endl;
    cout<<"Score 1: ";
    cin>>num1;
    cout<<"Score 2: ";
    cin>>num2;
    cout<<"Score 3: ";
    cin>>num3;
    cout<<"Score 4: ";
    cin>>num4;
}
void avg(float &a, int &num1,int &num2,int &num3,int &num4){
    //Compute the average of all four scores
    a=((num1+num2+num3+num4)/4);
    //Output average
    cout<<"The average of all scores is: "<<a<<endl;  
}
void std_dev(float &stdev, float &a, int &num1, int &num2, int &num3, int &num4)
{
    cout<<fixed<<setprecision(2);
    //Calculate the standard deviation
    stdev=sqrt((num1-a)*(num1-a)+(num2-a)*(num2-a)+(num3-a)*(num3-a)+
            (num4-a)*(num4-a));
    //Output standard deviation
    cout<<"The standard deviation is: "<<stdev<<endl;
}