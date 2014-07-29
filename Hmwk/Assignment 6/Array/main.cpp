/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 28, 2014, 2:53 PM
 */
#include <iostream>
#include <cstdlib>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  
    
    int scores[5][5];
    
    cout<<"Enter scores: "<<endl;
    
    for(int i=0;i<5;i++){
        cin>>scores[0][i];
    }
    for(int j=0;j<5;j++){
      cout<<scores[0][j];
    }
    return 0;
}

