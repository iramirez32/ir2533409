/* 
 * File:   main.cpp
 * Author: Idalia R
 * Created on June 25, 2014, 6:51 PM
 */
//Added an extra space b/w "<" and "iostream"
#include <iostream>
//Did not add the namespace "std"
using namespace std;
//Misspelled "main" for "msin"
int main(int argc, char** argv) {
    //Omitted the "int" before variable names
     int Nmofpds, psprpd, totps;
    
     //Added double ">" instead of "<"
    cout << "Press return after entering a number.\n";
    cout <<"Enter the number of pods:\n";
    //Omitted the ";" after "Nmofpods"
    cin >> Nmofpds;
    //Misspelled "cout" by calling it "cot"
    cout << "Enter the number of peas in a pod;\n";
    cin >> psprpd;
    //Misspelled variable name "tops" instead of "totps"
    totps = Nmofpds * psprpd;
    cout << "If you have ";
    cout << Nmofpds;
    //Missed a set of " to enclose statement
    cout << " pea pods\n";
    cout << "and ";
    //Omitted "<<" after "cout"
    cout << psprpd;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    //Added a "." after "cout"
    cout << totps;
    cout << " peas in all the pods.\n";

//Missed the enclosing "}"
    return 0;
}

