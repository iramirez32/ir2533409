/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 30, 2014, 10:38 PM
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
            chcbr;//Number of chocolate bars
            
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
    
    cout<<"Last but not least, what is your gender?\n"<<"Enter 'M' for male, or "<<
            "'F' for female."<<endl;
     cin>>gndr;
    //Calculations
    //Note: not reading "if" and only compiling "else" part no matter input
      
    if (gndr=='M'||gndr=='m') {
        bmr=66+((6.3*wght)+(12.9*hght)-(6.8*age));
    } else if(gndr=='F'||gndr=='f'){
        bmr=655+((4.3*wght)+(4.7*hght)-(4.7*age));
      }else{
        cout<<"Invalid entry."<<endl;
      }
     chcbr=bmr/chcbrcl;
     
     //Output results
     cout<<"Your BMR is: "<<bmr<<endl;
     cout<<"The number of chocolate candy bars you may consume is: "<<
             chcbr<<endl;
     
    //End Here!
    return 0;
}

