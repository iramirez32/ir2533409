/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 23, 2014, 9:48 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void filAray(int[],float);
float Avg (const int[], float);
float Stdev (const int[],int);

//Execute Here.
int main(int argc, char** argv) {
    const int MaxS=200;//Maximum size of array
    int array[MaxS];   //Array variables
    float  nums,       //Number of variables to be entered
          stdev,       //Standard deviation
            sum,       //Sum of all variables
          tot=0;       //Total value inside of sqrt() for standard deviation
    
    //Fixed to two digits after the decimal
    cout<<fixed<<setprecision(2);
    //Input
    cout<<"Enter the number of variables to be input: ";
    cin>>nums;
    //Function calls
    filAray (array, nums);
    cout<<"The average is: "<<Avg (array, nums)<<endl;
    //Function calls
    stdev=Stdev(array,nums);
    cout<<"The standard deviation is: "<<stdev<<endl;
    
    return 0;
}
//Define functions
void filAray(int a[],float nums){
    for(int i=0;i<nums;i++){
        cout<<"Input the "<<i+1<<" element in the array"<<endl;
        cin>>a[i];
    }
}
float Avg (const int a[], float nums){
    //Declare sum
    float sum=0.0f;
    //Sum all numbers inputed to find average
    for (int i=0;i<nums;i++){
        sum+=a[i];
    }return sum/nums;
}
float Stdev (const int a[], int nums){
    float avg=Avg(a,nums),tot=0;
    //Find standard deviation
    for (int i=0;i<nums;i++){
        float temp=(a[i]-avg);
        tot+=temp*temp;
    }
    return sqrt(tot/(nums));
}