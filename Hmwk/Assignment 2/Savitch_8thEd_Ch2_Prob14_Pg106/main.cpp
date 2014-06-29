/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 29, 2014, 3:43 PM
 */
#include <iostream>
#include <string>
using namespace std;
//System Libraries


//User Defined Libraries


//Global Constants


//Function Prototypes


//Execute Here!
int main(int argc, char** argv) {
    //Define variables
    string instNm,  //Instructor's last name
            urNm, //Your name
            food, //A food
            numX, //A number b/w 100 and 120
            adjec,//An adjective
            clr,  //A color
            anml; //An animal
    
    cout<<"Welcome to the game of Mad Lib!\n";
    cout<<"Start off by answering the questions below: \n";
    //Inputing characters
    cout<<"What is your instructor's last name?\n";
    cin>> instNm;
    
    cout<<"What is your name? \n";
    cin>> urNm;
    
   
    cout<<"What is your favorite food? \n";
    cin>> food;
    
    cout<<"Choose a number between 100 and 120: \n";
    cin>> numX;
    
    cout<<"Choose an adjective: \n";
    cin>> adjec;
    
    cout<<"What is your favorite color? \n";
    cin>> clr;
    
    cout<<"What is your favorite animal? \n";
    cin>> anml;
    //Execute strings
    cout<<"\n"<<"Dear Instructor "<<instNm<<",\n";
    cout<<" \n";
    cout<<"I am sorry that I am unable to turn in my homework at this time.\n"<<
            "First, i ate a rotten "<<food<<", which made me turn "<<clr<<
            " and extremely ill. I came down with a fever of "<<numX<<".\n"<<
            "Next, my "<<adjec<<" pet "<<anml<<" must have smelled the \n"<<
            "remains of the "<<food<<" on my homework, because he ate it.\n"<<
            "I am currently rewriting my homework and hope you accept it late.";
    cout<<" \n"<<" \n"<<"Sincerely,\n"<<urNm;
            
    //End Here!
    return 0;
}

