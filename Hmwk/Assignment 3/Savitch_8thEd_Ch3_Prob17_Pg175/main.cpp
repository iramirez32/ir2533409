/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 7, 2014, 10:39 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Defined Libraries


//Global Constants


//Function Prototypes


//Execute Here!
int main(int argc, char** argv) {
    //Define Variables
    char    gndr; //Gender
    unsigned short
            age,  //Age in years
            wght, //Weight in pounds
            hght, //Height in inches
            chcbrcl=230; //Amount of calories in a chocolate bar
    float
            bmr, //Basal metabolic rate
            chcbr,//Number of chocolate bars
            bmrInc; //Increase to BMR according to physical activity
    char     num;  //Number chosen for exercise option
            
    cout<<"If you love chocolate but hate exercising, no worries!\n"<<
             "By using the Harris-Benedict equation, we can help you\n"<<
             "maintain your weight by calculating your basal metabolic\n"<<
            "rate and give you an approximate number of chocolate bars\n"<<
            "you can consume to maintain your weight."<<endl;
    cout<<"Answer the following questions in order to proceed."<<endl;
    
    cout<<"What is your age?\n";
    cin>>age;
    
    cout<<"What is your weight in pounds?\n";
    cin>>wght;
    
    cout<<"What is your height in inches?\n";
    cin>>hght;
    
    cout<<"What is your gender?\n"<<"Enter 'M' for male, or "<<
            "'F' for female."<<endl;
    cin>>gndr;     
    
     //Calculations
    if (gndr=='M'||gndr=='m') {
        bmr=66+((6.3*wght)+(12.9*hght)-(6.8*age));
    } else if(gndr=='F'||gndr=='f'){
        bmr=655+((4.3*wght)+(4.7*hght)-(4.7*age));
      }else{
        cout<<"Invalid entry."<<endl;
      }
    
     cout<<"Based on your physical activity,choose the number\n"<<
             "that best suits you.\n";  
     cout<<"1. Sedentary\n"<<"2. Somewhat active (exercise occasionally)\n"<<
             "3. Active (exercise 3-4 days a week)\n"<<
             "4. Highly Active (exercise every day).\n";
     cin>>num;
      switch (num)
     {
         case '1':
             bmrInc=bmr*.20;
             bmr=bmr+bmrInc;
             break;
         case '2':
             bmrInc=bmr*.30;
             bmr=bmr+bmrInc;
             break;
         case '3':
             bmrInc=bmr*.40;
             bmr=bmr+bmrInc;
             break;
         case '4':
             bmrInc=bmr*.50;
             bmr=bmr+bmrInc;
             break;
         default:
             cout<<"Not a valid entry.\n";
     }
     //Error: Switch won't work. Only output default option...
     
     //Final calculation
     chcbr=bmr/chcbrcl;
     //Output results
     cout<<"Your BMR is: "<<bmr<<endl;
     cout<<"The number of chocolate candy bars you may consume is: "<<
             chcbr<<endl;                   
     
    //End Here.
    return 0;
}

