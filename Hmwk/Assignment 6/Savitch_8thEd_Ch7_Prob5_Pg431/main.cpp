/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 24, 2014, 1:30 PM
 */
//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void filAray(int[],float);
void sort (int a[], int);
void swap_values (int &v1, int &v2);
int smallst(const int a[], int stindex, int nums);

//Execute Here.
int main(int argc, char** argv) {
    const int MaxS=50;//Maximum size of array
    int array[MaxS];  //Array variables
    float    nums,    //Number of variables to be entered
           values;
    char   choice;    //Choice of input method
    ifstream input;
    cout<<"Would you like to input numbers or read from file?"<<endl;
    cout<<"Enter 'I' for input, or 'F' for file."<<endl;
    cin>>choice;
   
    if (choice=='I'||choice=='i'){
    //Input
    cout<<"Enter the number of variables to be input: ";
    cin>>nums;
    //Function calls
    filAray (array, nums);
    } else if (choice=='F'||choice=='f'){
        //Open the input file
        input.open("C://data.txt");
        while (input){
            input>>values;
            cout<<values<<endl;
        }
        input.close();
    }
    //Function calls
    sort(array,nums);
    
    cout<<"In sorted order the numbers are: "<<endl;
    for (int index=0; index<nums; index++){
        cout<<array[index]<<" ";
        cout<<endl;
    }
    return 0;
}
//Define functions
void filAray(int a[],float nums){
    cout<<"Input the element into the array: "<<endl;
    for(int i=0;i<nums;i++){
        cin>>a[i];
    }
}
void swap_values(int& v1, int& v2){
    int temp;
    temp=v1;
    v1=v2;
    temp=v2;
}
int smallst(const int a[], int stindex, int nums){
    int min=a[stindex],
            indxofmin=stindex;
    for (int index=stindex+1; index<nums; index++){
        if (a[index]<min){
            min=a[index];
            indxofmin=index;
        }
        return indxofmin;
    }
}
void sort (int a[], int nums){
    int indxofnxt;
    for (int index=0; index<nums-1;index++){
        indxofnxt=smallst(a,index, nums);
        swap_values(a[index], a[indxofnxt]);
    }
}  