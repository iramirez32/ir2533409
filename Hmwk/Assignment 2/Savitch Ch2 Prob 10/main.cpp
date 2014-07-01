/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 30, 2014, 9:02 PM
 */
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Define variables
    int num,
            sumtot=0,
            sumpos=0,
            sumneg=0,
            count=0;
   
        cout<<"Enter 10 arbitrary values, regardless of sign.\n";
        while (++count<=10)
    {
            cin>>num;
        {
        if (num>0)
             sumpos=sumpos+num;
        else
             sumneg=sumneg+num;
        }
        
        sumtot=sumtot+num;
    }
        cout<<"Total sum of values: "<<sumtot<<"\n";
        cout<<"Total sum of positive values: "<<sumpos<<"\n";
        cout<<"Total sum of negative values: "<<sumneg<<"\n";
   
    
    return 0;
}

