/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 9, 2014, 12:55 PM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    int   nGames, //Number of games
            wins, //Number of wins
            loss; //Number of losses
    
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Input number of games user wants to play
    cout<<"How many games of crap would you like to play?"<<endl;
    cin>>nGames;
    
    //Loop on the number of games
    for(int game=1;game<=nGames;game++){
        //Throw the dice
        char die1=rand()%6+1,
             die2=rand()%6+1,
             sum1=die1+die2;
        switch(sum1){
            case 7:case 11:{
                wins++;break;
            }case 2:case 3:case 12:{
                loss++;break;
            }default:{
                //Condition for throws=4,5,6,7,8,9
                char sum2;
                do{
    //Throw for the second sum
                    die1=rand()%6+1;
                    die2=rand()%6+1;
                    char sum2=die1+die2;
    //Determine a win or loss
                    if (sum2==7)loss++;
                    if (sum2==sum1)wins++;
            }while(!(sum2==7||sum1==sum2));
        }
    }
}
        //Output the results
        cout<<"The number of games played: "<<nGames<<endl;
        cout<<"The number of games won: "<<wins<<endl;
        cout<<"The number of games lost: "<<loss<<endl;
    
//End Here.
    return 0;
}

