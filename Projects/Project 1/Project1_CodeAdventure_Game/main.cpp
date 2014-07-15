/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 13, 2014, 9:07 PM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    //Define variables
    char    name[20],  //Name of player
            place[20], //Favorite place of player
            monstr[15];//Player's worst fear
               
    int     tGold=4,   //Total gold coins
            tSilvr=4,  //Total silver coins
            tCoins,    //Total coins - gold + silver
            choice;    //Player's choice of door number
    
    //Seed randomization
    srand(static_cast<unsigned int>(time(0)));
    
    cout<<"Welcome to the game of Code Adventure!"<<endl;
    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"Enter your favorite place: ";
    cin>>place;
    cout<<"Name the monster of your worst nightmares: ";
    cin>>monstr;
    cout<<" "<<endl;
    
    //Basic description of game rules
    cout<<name<<", you have five doors to choose from. You will start off\n"
            "with 4 gold coins and 4 silver coins. Your objective is to \n"
            "find the exit door, with some coins in your pocket. If you \n"
            "lose all of your coins, you automatically lose. Good Luck!\n";
    cout<<" "<<endl;
    
    //Loop the code
    do
    {
     //Total coins - gold + silver
     tCoins=tGold+tSilvr;
    //Player's choice - Input
    cout<<"Please choose a door [1/2/3/4/5]: ";
    cin>>choice;
    cout<<" "<<endl;
    //Shuffles the choice output so door assignment won't always be same
    int doorarray[5]={1,2,3,4,5};
    random_shuffle (&doorarray[0],&doorarray[5]);
    //Choice is minus 1 due to counting 0 as an integer
    choice=choice-1;
    //Directly correlate door choice to array of randomization
    choice=doorarray[choice];
    //Output door assignment
    switch (choice){
        case 1: 
            cout<<"!POOF! You have found a Genie! He likes to give\n"<<
            "away free money, so you are in luck! Genie has granted\n"<<
            "you 2 gold coins and 2 silver coins. Continue your journey!"<<endl;
            //Calculations
            tGold=tGold+2;   //Total gold coins
            tSilvr=tSilvr+2; //Total silver coins
            tCoins=tGold+tSilvr; //Total coins in general
            cout<<"You now have "<<tGold<<" gold coins and "<<tSilvr<<
                    " silver coins.\n"<<"Which is a total of "<<tCoins<<
                    " coins. Keep going!"<<endl;
            break;
        case 2: 
            cout<<"OH NO! You have entered the lair of "<<monstr<<"!!\n"<<
            "He has taken all of your coins away! You have automatically\n"<<
            "lost this game. Sorry try again!"<<endl;
            //Calculations
            tGold=0;  //Total gold coins 
            tSilvr=0; //Total silver coins
            tCoins=tGold+tSilvr; //Total coins in general
            break;
        case 3:
            cout<<"    ||       ||"<<endl;
            cout<<"    ||       ||"<<endl;
            cout<<"    ||       ||"<<endl;
            cout<<"    ||       ||"<<endl;
            cout<<"    ||       ||"<<endl;
            cout<<" "<<endl;
            cout<<" C               C"<<endl;
            cout<<"  C             C"<<endl;
            cout<<"    C C C C C C "<<endl;
            cout<<" "<<endl;
            cout<<"You have opened the room of happiness!"<<endl;
            cout<<"Your coins are safe, go on and be happy!"<<endl;
            cout<<" "<<endl;
            break;
        case 4:
            cout<<"Congrats! You have found the exit! You have completed\n"<<
            "the game. Thanks for playing!"<<endl;
            //Figuratively setting tCoins equal to zero so it ends loop
            tCoins=0; 
            break; 
        case 5:
            cout<<"You have opened a room that has transported you to\n"<<
                    place<<"! This trip will cost you 2 gold coins and 2 "<<
                    "silver coins."<<endl;
            //Calculations
            tGold=tGold-2;   //Total gold coins
            tSilvr=tSilvr-2; //Total silver coins
            tCoins=tGold+tSilvr; //Total coins in general
            cout<<"You now have "<<tGold<<" gold coins and "<<tSilvr<<
                    " silver coins.\n"<<"Which is a total of "<<tCoins<<
                    " coins. Continue your journey!"<<endl;
            cout<<" "<<endl;
            break;
    }
    } while (tCoins!=0); //As long as the player has coins, game continues
    
    //End Here.
    return 0;
    
}

