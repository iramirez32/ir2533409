/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 26, 2014, 9:07 PM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;
//User Defined Libraries


//Global Constants


//Function Prototypes
int RPS ();


//Execute Here.
int main(int argc, char** argv) {
//Declare variables
    char    name[20],  //Name of player
            place[20], //Favorite place of player
            monstr[15],//Player's worst fear
            born[20],  //Player's birthplace
            rltve[20], //Player's relative name
            answr;     //Player's answer to repeat the game
               
    int     tGold=5,  //Total gold coins
            tSilvr=5, //Total silver coins
            tCoins,    //Total coins - gold + silver
            choice;    //Player's choice of door number
    
    ifstream input;    //File to be input
    
    //Seed randomization
    srand(static_cast<unsigned int>(time(0)));
    
    do
    {
        //Inputs for the game
        cout<<"Welcome to the game of Code Adventure!"<<endl;
        cout<<endl;
        cout<<"Please enter your name: ";
        cin>>name;


        cout<<"In what city were you born? ";
        cin>>born;
        
        cout<<"Enter the name of a close relative: ";
        cin>>rltve;


        cout<<"Enter your favorite place: ";
        cin>>place;


        cout<<"Name the monster of your worst nightmares: ";
        cin>>monstr;
        cout<<endl;


        //Basic description of game rules
        cout<<name<<", you have eight doors to choose from. You will start\n"
                "with 5 gold coins and 5 silver coins. Your objective is to\n"
                "find the exit door, with some coins in your pocket. If you \n"
                "lose all of your coins, you automatically lose. Good Luck!\n";
        cout<<endl;


        //Loop the input/output code
        do
        {
             //Total coins = gold + silver
             tCoins=tGold+tSilvr;


            //Player's choice - Input
            cout<<"Please choose a door [1/2/3/4/5/6/7/8]: ";
            cin>>choice;
            cout<<endl;


            //Shuffles the choice output so door assignment won't always be same
            int doorarray[8]={1,2,3,4,5,6,7,8};
            random_shuffle (&doorarray[0],&doorarray[8]);


            //Choice is minus 1 due to counting 0 as an integer
            choice=choice-1;
            //Directly correlate door choice to array of randomization
            choice=doorarray[choice];


            //Output door assignment using switch
            switch (choice){
                //Case 1
                case 1:{
                    cout<<"!POOF! You have found a Genie! He likes to give\n"<<
                    "away free money, so you are in luck! Genie has granted\n"<<
                    "you 5 gold coins and 5 silver coins. Keep going!"<<endl;


                    //Calculations
                    tGold=tGold+5;   //Total gold coins
                    tSilvr=tSilvr+5; //Total silver coins
                    tCoins=tGold+tSilvr; //Total coins in general


                    cout<<"You now have "<<tGold<<" gold coins and "<<tSilvr<<
                            " silver coins.\n"<<"Which is a total of "
                            <<tCoins<<" coins."<<endl;
                    cout<<endl;
                    break;
                }
                    //Case 2
                case 2: {
                    cout<<"OH NO! You have entered the lair of "<<monstr<<"!!\n"
                            <<"He has taken all of your coins away!\n"
                            <<"You have automatically lost this game.\n"
                            <<"Sorry try again!"<<endl;
                    //Zero coins ends the game
                    tCoins=0;
                    break;
                }
                    //Case 3
                case 3:{
                    //Displays code figure
                    cout<<"    ||       ||"<<endl;
                    cout<<"    ||       ||"<<endl;
                    cout<<"    ||       ||"<<endl;
                    cout<<"    ||       ||"<<endl;
                    cout<<"    ||       ||"<<endl;
                    cout<<endl;
                    cout<<" C               C"<<endl;
                    cout<<"  C             C"<<endl;
                    cout<<"    C C C C C C "<<endl;
                    cout<<endl;
                    cout<<"You have opened the room of happiness!"<<endl;
                    cout<<"Your coins are safe so be happy!"<<endl;
                    cout<<"You have "<<tGold<<" gold coins and "<<tSilvr<<
                            " silver coins."<<endl;
                    cout<<endl;
                    break;
                }
                    //Case 4
                case 4:{
                    cout<<"Congrats, you have found the exit! You have\n"
                            "completed the game with "<<tGold<<
                            " gold coins and "<<tSilvr<<" silver coins.\n"<<
                            "Thanks for playing!"<<endl;


                    //Figuratively setting tCoins equal to zero so it ends loop
                    tCoins=0; 
                    break; 
                }
                    //Case 5
                case 5:{
                    cout<<"You have opened a room that has transported you to\n"
                            <<place<<"! This trip will cost you 5 gold coins\n"
                            <<"and 5 silver coins."<<endl;


                    //Calculations
                    tGold=tGold-5;   //Total gold coins
                    tSilvr=tSilvr-5; //Total silver coins
                    tCoins=tGold+tSilvr; //Total coins in general


                    cout<<"You now have "<<tGold<<" gold coins and "<<tSilvr<<
                            " silver coins.\n"<<"Which is a total of "
                            <<tCoins<<" coins."<<endl;
                    cout<<endl;
                    break;
                }
                    //Case 6
                case 6:{
                    //Local variable
                    char help; //Answer to help call
                    
                    cout<<"You have been taken back to your birthplace: "<<born
                            <<".\n"<<"You have found long lost family members\n"
                            <<"who are in need of your help. They need 5 gold\n"
                            <<"coins and 5 silver coins to solve the problem.\n"
                            <<"Would you like to help them? Enter 'Y' for yes."
                            <<endl;
                    //Input answer to help call
                    cin>>help;
                    //Outputs depending on answer
                    if (help=='Y'||help=='y'){
                        tGold=tGold-5;
                        tSilvr=tSilvr-5;
                        tCoins=tGold+tSilvr;
                        cout<<"Your long lost family members are grateful for "
                                <<"your help!\n"<<"Continue your journey!"
                                <<endl;
                        cout<<"You now have "<<tGold<<" gold coins and "<<tSilvr
                                <<" silver coins."<<endl;
                    }else{
                        cout<<"They are saddened from your response and never\n"
                                <<"want to see you again!"<<endl;
                        cout<<"You still have "<<tGold<<" gold coins and "
                                <<tSilvr<<" silver coins."<<endl;
                    }
                    cout<<endl;
                    break;
                }
                    //Case 7
                case 7:{
                    int decsn; //Decision made upon results of game
                    
                    cout<<"You have just entered the Game Room!"<<endl;
                    cout<<"Meet Bob, a rock, paper, scissor (RPS) fanatic.\n"
                            <<"He challenges you to three rounds of RPS.\n" 
                            <<"If you win, he will give you 5 gold coins.\n"
                            <<"But if you lose, he will take 5 of your "
                            <<"gold coins."<<endl;
                    cout<<"You will be player 1. Good luck!"<<endl;
                    cout<<endl;
                    //Function call
                    decsn=RPS ();


                    if (decsn==1){
                        cout<<"Congrats you have won! Bob has given you 5\n"
                                "gold coins. Good job!"<<endl;
                        tGold=tGold+5;
                        tSilvr=tSilvr;
                    }else{
                        cout<<"Bob has won! You may pay him his 5 gold coins\n"
                                "now."<<endl;
                        tGold=tGold-5;
                        tSilvr=tSilvr;
                        tCoins=tGold+tSilvr;
                    }
                    cout<<endl;
                    cout<<"You have "<<tGold<<" gold coins and "<<tSilvr<<
                            " silver coins."<<endl;

                    cout<<endl;

                    break;
                }
                //Case 8
                case 8:{
                    //Local variable
                    const int SIZE = 7;
                    string  line[SIZE];

                    cout<<"You have just found a letter from your close\n"
                            <<"relative: "<<rltve<<". You may read the letter"
                            <<" now."<<endl;
                    cout<<endl;
                    //Open file from local disk
                    input.open ("Data1.txt");
                    //Read from file 
                    for(int i=0;i<SIZE;i++){
                        getline(input,line[i]);
                    }
                    //String array displayed as 2D character array
                    for(int i=0;i<SIZE;i++){
                        for(int j=0;j<line[i].length();j++){
                            cout<<line[i][j];
                        }
                        cout<<endl;
                    }
                    cout<<"Sincerely,\n"<<rltve<<endl;
                    cout<<endl;
                    tSilvr=tSilvr+5;
                    tGold=tGold;
                    tCoins=tSilvr+tGold;
                    //Close file
                    input.close();
                }
            }
            //As long as the player has coins, game continues
        }while (tCoins!=0); 


        //Asks the player if he/she would like to repeat the game
        cout<<endl;
        cout<<"Would you like to play again?\n"
            <<"Enter 'Y' for yes, or 'N' for no."<<endl;
        cin>>answr;
        cout<<endl;


    }while (answr=='Y'||answr=='y');
    
    //End Here.
    return 0;
}


//Function definitions
int RPS (){
    //Define variables
    char   chce1, //Player 1's choice
           chce2, //Player 2's choice
              P,  //Paper
              R,  //Rock
              S;  //Scissor
            
    int   smpts1=0,//Sum of points for player 1
          smpts2=0,//Sum of points for player 2
           count=0; //Keeps loop count
    
    cout<<"Input P for paper, R for rock, or S for scissor."<<endl;
    cout<<"For every play you win, you will receive one point."<<endl;
    cout<<"The player with most points wins!"<<endl;
    
    for (count=0;count<3;count++){
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
    cout<<endl;
    
    if(smpts1>smpts2){
        return 1;
    }else{
        return 2;
    }
}