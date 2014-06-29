/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 29, 2014, 2:47 PM
 */
#include <iostream>
using namespace std;
//System Libraries


//User Defined Libraries


//Global Constants


//Function Prototypes


//Execute Here!
int main(int argc, char** argv) {
    //Define Variables
    unsigned short
            numGst, //Number of guests attending meeting
            LesGst,  //Number of guest excluded
            MrGst;   //Number of additional guests
    const short   maxCp=80;//Maximum capacity of meeting room
    
    cout<<"Greetings from University Convention Center!\n";
    cout<<"Thank you for choosing UCC to host your business meeting.\n";
    cout<<"We have noticed you showed interest in our state of the art\n";
    cout<<"Bourns Lounge. To begin your reservation, please enter the\n";
    cout<<"number of guests attending: \n";
    cin>>numGst;
    //Calculations
    LesGst=numGst-maxCp; //Number of guests needed toe exclude
    MrGst=maxCp-numGst;  //Number of additional guests allowed
    
    if (numGst>=80)
        cout<<"We are sorry, our Bourns lounge has a maximum capacity\n"<<
                "of "<<maxCp<<". The meeting cannot be held as planned\n"<<
                "due to fire regulations. In order to be able to reserve\n"<<
                "this room, we must exclude "<<LesGst<<" guests.\n"<<
                "Once again we apologize for the inconvenience and \n"<<
                "recommend you view through our larger rooms to host your\n"<<
                "event.";
    else 
        cout<<"Wonderful! Your number of guests is less than our maximum\n"<<
                "capacity. You are allowed to bring "<<MrGst<<" more\n"<<
                "guests if you wish to. We strongly enforce our maximum\n"<<
                "capacity limits due to fire regulations. By law, it is\n"<<
                "legal to have less than or equal to "<<maxCp<<" guests\n"<<
                "within our Bourn's Lounge.\n"<<"You should receive a "<<
                "confirmation email\n"<<"about your reservation shortly.\n"<<
                "Thank you for choosing University Convention Center \n"<<
                "to host your events and meetings!";
  
    //End Here!
    return 0;
}

