/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 24, 2014, 4:42 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
int length(char []);
bool Addn(char,char,char &,bool=false);
int sizeResult(char [],char []);
bool numAdd(char [],char [],char []);

//Execute Here.
int main(int argc, char** argv) {
    //Input numbers using character arrays
    char num1[20]; //First number
    char num2[20]; //Second number
    char result[sizeResult(num1,num2)]; //Result
    
    //Inputs
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
            
    //Add the numbers
    int width=20;
    cout<<right;
    cout<<setw(width)<<num1<<endl;
    cout<<"+"<<setw(width-1)<<num2<<endl;
    bool x=numAdd(num1,num2,result);
    cout<<"__________________________"<<endl;
    
    if(x){
        cout<<"Integer overflow"<<endl;
    }else{cout<<setw(width)<<result<<endl;
    }
    return 0;
}
bool numAdd(char n1[],char n2[],char r[]){
    //Initialize the result array
    r[sizeResult(n1,n2)-1]='\0';
    for(int i=0;i<=sizeResult(n1,n2)-2;i++){
        r[i]='0';
    }
    //Start the counters
    int rcnt=sizeResult(n1,n2)-2;
    int n1cnt=length(n1)-1;
    int n2cnt=length(n2)-1;
    //Added the first digit
    bool c=Addn(n1[n1cnt--],n2[n2cnt--],r[rcnt--]);
    do{
    if(n1cnt<0&&n2cnt<0)return c;
    else if(n1cnt<0)c=Addn('0',n2[n2cnt--],r[rcnt--],c);
    else if(n2cnt<0)c=Addn(n1[n1cnt--],'0',r[rcnt--],c);
    else c=Addn(n1[n1cnt--],n2[n2cnt--],r[rcnt--],c);
    }while(true);
}
int sizeResult(char n1[],char n2[]){
    int size1=length(n1);
    int size2=length(n2);
    if(size1>size2)return size1+1;
    return size2+1;
}
bool Addn(char n1,char n2,char &d,bool c){
    int i1=n1-48,i2=n2-48;
    int sum=i1+i2+c;
    d=sum%10+48;
    return sum/10;
}


int length(char a[]){
    int cnt=0;
    do{}while(a[cnt++]!='\0');
    return cnt-1; 
}
