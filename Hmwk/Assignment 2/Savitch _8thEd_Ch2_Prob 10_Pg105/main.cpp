/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 30, 2014, 9:02 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here!
int main(int argc, char** argv) {
    //Define variables
    int num, //Arbitrary number
            sumtot=0, //Total sum of all values
            sumpos=0, //Total sum of positive values only,
            sumneg=0, //Total sum of negative values only
            count=0;  //Controls number of times loop is repeated
    //All values will not equal zero at end; just a control for now
   
        cout<<"Enter 10 arbitrary values, regardless of sign.\n";
        while (++count<=10)
    {
            cin>>num; 
        {
        if (num>0)
             sumpos=sumpos+num; //Total (+) sum
        else
             sumneg=sumneg+num; //Total (-) sum
        }
        
        sumtot=sumtot+num;
    }
        cout<<"Total sum of values: "<<sumtot<<"\n";
        cout<<"Total sum of positive values: "<<sumpos<<"\n";
        cout<<"Total sum of negative values: "<<sumneg<<"\n";
   
    
    return 0;
}

