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
    char    gndr, //Gender
            M,    //Male
            F;    //Female
    float   age,  //Age
            wght, //Weight
            hght, //Height
            bmrF, //Basal metabolic rate for women
            bmrM; //Basal metabolic rate for men
            
    cout<<"If you love chocolate but hate exercising, no worries!\n"<<
             "By using the Harris-Benedict equation, we can help you\n"<<
             "maintain your weight by calculating your basal metabolic\n"<<
            "rate and give you an approximate number of chocolate bars\n"<<
            "you can consume to maintain your weight."<<endl;
    cout<<"Answer the following questions in order to proceed."<<endl;
    
    cout<<"What is your age?\n";
    cin>>age;
    
    cout<<"What is your weight?\n";
    cin>>wght;
    
    cout<<"What is your height?\n";
    cin>>hght;
    {
    cout<<"Last but not least, what is your sex?\n"<<"Enter 'M' for male, or "<<
            "'F' for female."<<endl;
     cin>>gndr;
    //Calculations
    bmrF=655+((4.3*wght)+(4.7*hght)-(4.7*age));
    
    bmrM=66+((6.3*wght)+(12.9*hght)-(6.8*age));
    //Note: not reading "if" and only compiling "else" part no matter input
    if (gndr=M)
         cout<<"According to our calculations, you may consume\n"<<
              (bmrM)/230<<" chocolate bars in order to maintain your "<<
              "weight."<<endl;
    else 
         cout<<"According to our calculations, you may consume\n"<<
              (bmrF/230)<<" chocolate bars in order to maintain your "<<
              "weight."<<endl;
    }
    //End Here!
    return 0;
}

