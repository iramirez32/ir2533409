/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 5, 2014, 1:48 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
//Define variables
    char    chce1, //Player 1's choice
            chce2, //Player 2's choice
               P,  //Paper
               R,  //Rock
               S;  //Scissor
            
    int smpts1=0,    //Sum of points for player 1
            smpts2=0,//Sum of points for player 2
            count=0; //Keeps loop count
    
    
    cout<<"Welcome to a game of Rock, Paper, Scissors!"<<endl;
    cout<<"Input P for paper, R for rock, or S for scissor."<<endl;
    cout<<"For every play you win, you will receive one point."<<endl;
    cout<<"The player with most points wins!"<<endl;
    
    for (count=0;count<=10;count++){
    //Input choices
    cout<<"Rock, paper, or scissor?"<<endl;
    cout<<"Player 1: ";
    cin>>chce1;
    cout<<"Player 2: ";
    cin>>chce2;
 
    //Output results
    if (chce1=='P'&&chce2=='R'){
        cout<<"Paper covers rock."<<endl;
        smpts1=smpts1+1;
    }else if (chce1=='P'&&chce2=='S'){
        cout<<"Scissors cut paper."<<endl;
        smpts2=smpts2+1;
    }else if (chce1=='R'&&chce2=='P'){
        cout<<"Paper covers rock."<<endl;
        smpts2=smpts2+1;
    }else if (chce1=='R'&&chce2=='S'){
        cout<<"Rock breaks scissors."<<endl;
        smpts1=smpts1+1;
    }else if (chce1=='S'&&chce2=='P'){
        cout<<"Scissors cut paper."<<endl;
        smpts1=smpts1+1;
    }else if (chce1=='S'&&chce2=='R'){
        cout<<"Rock breaks scissors."<<endl;
        smpts2=smpts2+1;
    }else if (chce1==chce2)
        cout<<"Tie! Try again."<<endl;
 }
    //Calculations
    cout<<"Player 1 has a total of: "<<smpts1<<endl;
    cout<<"Player 2 has a total of: "<<smpts2<<endl;
     
    //End Here
    return 0;
}

