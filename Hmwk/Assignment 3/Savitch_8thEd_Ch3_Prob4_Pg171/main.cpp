/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 7, 2014, 9:46 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
//Declare variables
    char ans;   //Controls loop
    int  month, //Month of birth 
         day;   //Day of the month
    
    cout<<"Welcome to the Astrology Program."<<endl;
    cout<<"We offer free daily horoscopes depending on your sign."<<endl;
    cout<<"To determine your sign, enter your birth date."<<endl;
    
    do{
    cout<<"Enter your birth month as a number (ex. Jan = 1): ";
    cin>>month;
    cout<<"Enter the day you were born (ex. 1-31): ";
    cin>>day; 
   
    if (month==1){
        if ((day>=1)&&(day<=19)){
            cout<<"Your sign is Capricorn, an Earth sign.\n"<<
                    "Compatible with Taurus, Virgo, & Capricorn.\n"<<
                    "Today you will encounter someone from the past."<<endl;
        }else if ((day>=20)&&(day<=31))
            cout<<"Your sign is Aquarius, an Air sign.\n"<<
                    "Compatible with Gemini, Libra, & Aquarius.\n"<<
                    "Today is your lucky day. Money will appear randomly\n"<<
                    "in the most unexpected places."<<endl;
    }
    if (month==2){
        if((day>=1)&&(day<=18)){
            cout<<"Your sign is Aquarius, an Air sign.\n"<<
                    "Compatible with Gemini, Libra, & Aquarius.\n"
                    "Today is your lucky day. Money will appear randomly\n"<<
                    "in the most unexpected places."<<endl;
        }else if ((day>=19)&&(day<=28))
            cout<<"Your sign is Pisces, a Water sign.\n"<<
                    "Compatible with Cancer, Scorpio, & Pisces.\n"<<
                    "Hard work will pay off. Stay calm and keep going."<<endl;
    }
    if (month==3){
        if((day>=1)&&(day<=20)){
            cout<<"Your sign is Pisces, a Water sign.\n"<<
                    "Compatible with Cancer, Scorpio, & Pisces.\n"<<
                    "Hard work will pay off. Stay calm and keep going."<<endl;
        }else if ((day>=21)&&(day<=31))
            cout<<"Your sign is Aries, a Fire sign.\n"<<
                    "Compatible with Leo, Sagittarius, & Aries.\n"<<
                    "Be patient. Don't let your anger conquer you."<<endl;
    }
    if (month==4){
        if((day>=1)&&(day<=19)){
            cout<<"Your sign is Aries, a Fire sign.\n"<<
                    "Compatible with Leo, Sagittarius, & Aries.\n"<<
                    "Be patient. Don't let your anger conquer you."<<endl;
        }else if ((day>=20)&&(day<=30))
            cout<<"Your sign is Taurus, an Earth sign.\n"<<
                    "Compatible with Virgo, Capricorn, & Taurus.\n"<<
                    "Don't expect to find happiness in money.\n"<<
                    "Learn how to be happy with the little you've got."<<endl;
    }
    if (month==5){
        if((day>=1)&&(day<=20)){
            cout<<"Your sign is Taurus, an Earth sign.\n"<<
                    "Compatible with Virgo, Capricorn, & Taurus.\n"<<
                    "Don't expect to find happiness in money.\n"<<
                    "Learn how to be happy with the little you've got."<<endl;
    }else if ((day>=21)&&(day<=31))
        cout<<"Your sign is Gemini, an Air sign.\n"<<
                "Compatible with Libra, Aquarius, & Gemini.\n"<<
                "Your persistence will take you to your destination."<<endl;
    }
    if (month==6){
        if ((day>=1)&&(day<=21)){
            cout<<"Your sign is Gemini, an Air sign.\n"<<
                   "Compatible with Libra, Aquarius, & Gemini.\n"<<
                "Your persistence will take you to your destination."<<endl;
    }else if ((day>=22)&&(day<=30))
        cout<<"Your sign is Cancer, a Water sign.\n"<<
                "Compatible with Pisces, Scorpio, & Cancer.\n"<<
               "Stay away from bad influences. Listen to your instincts."<<endl;
    }
    if (month==7){
        if((day>=1)&&(day<=22)){
            cout<<"Your sign is Cancer, a Water sign.\n"<<
                    "Compatible with Pisces, Scorpio, & Cancer.\n"<<
               "Stay away from bad influences. Listen to your instincts."<<endl;  
        }else if ((day>=23)&&(day<=31))
            cout<<"Your sign is Leo, a Fire sign.\n"<<
                    "Compatible with Aries, Sagittarius, & Leo.\n"<<
                  "Don't waste your time in unnecessary drama. Move on."<<endl;
    }
    if (month==8){
        if ((day>=1)&&(day<=22)){
            cout<<"Your sign is Leo, a Fire sign.\n"<<
                    "Compatible with Aries, Sagittarius, & Leo.\n"<<
                  "Don't waste your time in unnecessary drama. Move on."<<endl;
        }else if ((day>=23)&&(day<=31))
            cout<<"Your sign is Virgo, an Earth sign.\n"<<
                    "Compatible with Taurus, Capricorn, & Virgo.\n"<<
                    "Watch out. Those you call friends might not be so."<<endl;
    }
    if (month==9){
        if ((day>=1)&&(day<=22)){
            cout<<"Your sign is Virgo, an Earth sign.\n"<<
                    "Compatible with Taurus, Capricorn, & Virgo.\n"<<
                    "Watch out. Those you call friends might not be so."<<endl;
        }else if ((day>=23)&&(day<=30))
            cout<<"Your sign is Libra, an Air sign.\n"<<
                    "Compatible with Aquarius, Gemini, & Libra.\n"<<
                    "Stop being indecisive. Be bold and make a choice."<<endl;
    }
     if (month==10){
         if ((day>=1)&&(day<=22)){
             cout<<"Your sign is Libra, an Air sign.\n"<<
                     "Compatible with Aquarius, Gemini, & Libra.\n"<<
                    "Stop being indecisive. Be bold and make a choice."<<endl;
         }else if ((day>=23)&&(day<=31))
             cout<<"Your sign is Scorpio, a Water sign.\n"<<
                     "Compatible with Cancer, Pisces, & Scorpio.\n"<<
                   "Control your impulsiveness otherwise you shall pay."<<endl;
     }  
    if (month==11){
        if ((day>=1)&&(day<=21)){
            cout<<"Your sign is Scorpio, a Water sign.\n"<<
                   "Compatible with Cancer, Pisces, & Scorpio.\n"<<
                   "Control your impulsiveness otherwise you shall pay."<<endl;
        }else if ((day>=22)&&(day<=30))
            cout<<"Your sign is Sagittarius, a Fire sign.\n"<<
                    "Compatible with Aries, Leo, & Sagittarius.\n"<<
                   "Don't be selfish, or bad karma will come your way."<<endl;
    }
    if (month==12){
        if ((day>=1)&&(day<=21)){
            cout<<"Your sign is Sagittarius, a Fire sign.\n"<<
                     "Compatible with Aries, Leo, & Sagittarius.\n"<<
                   "Don't be selfish, or bad karma will come your way."<<endl;  
    }else if ((day>=22)&&(day<=31))
        cout<<"Your sign is Capricorn, an Earth sign.\n"<<
                "Compatible with Taurus, Virgo, & Capricorn.\n"<<
                 "Today you will encounter someone from the past."<<endl;
    }
    cout<<"Would you like to check another horoscope?\n"<<
                "Enter 'Y' for yes, 'N' for no."<<endl;
    cin>>ans;
    }
    while ((ans!='N')||(ans!='n'));
    return 0;
}

