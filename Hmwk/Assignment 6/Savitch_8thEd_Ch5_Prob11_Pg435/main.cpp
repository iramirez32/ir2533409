/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 25, 2014, 8:24 PM
 */
//System Libraries
#include <iostream>
#include <string>
using namespace std;
//User Libraries

//Global Constants


//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    char Seat;  //Seat letter
    string AIR[7]={"1ABCD", "2ABCD", "3ABCD", "4ABCD","5ABCD","6ABCD","7ABCD"};
    char choice;//Answer to loop
    int ROW=0;  //Row number
    
    cout<<"Welcome to SWE Airlines!"<<endl;
    do
    {
        //Inputs
        cout<<"Enter a row (1-7): "<<endl;
        cin>>ROW;
        cout<<"Enter a seat (A-D): "<<endl;
        cin>>Seat;
        cout<<endl;

        //'X' input
        int plcmnt=1+Seat-'A';
        if(AIR[ROW-1][plcmnt]=='X'){
            //Output
            cout<<"Sorry, this seat is taken."<<endl;
        }else
            //Output
            AIR[ROW-1][plcmnt]='X';
        for(int i=0;i<7;i++){
            cout<<AIR[i]<<endl;
        }
        cout<<endl;
        cout<<"Would you like to try again? Enter 'Y' or 'y' for yes."<<endl;
        cin>>choice;
        //Loop input
    }while(choice=='Y'||choice=='y');
    
    cout<<"Thank you for choosing SWE Airlines!"<<endl;
    
return 0;
}