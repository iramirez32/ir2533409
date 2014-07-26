/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 25, 2014, 5:57 PM
 */
//System Libraries
#include <vector>
#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const int PLAYER1 = 0;
const int PLAYER2 = 1;

//Function Prototypes
const bool CLEAR_SCREEN = true;
void clearScreen();
void drawBoard(const vector <char>&board);
void initVector(vector <char> &v);
int convertPosition(char position);
bool validPlacement(const vector <char> &board, int position);
int getPlay(const vector <char> &board);
bool gameWon(const vector <char> &board);
bool boardFull(const vector <char> &board);

//Execute Here.
int main(int argc, char** argv){
    //Declare variables
    int g;
    int turn = PLAYER1; // Player 1 always goes first and is 'X'
    vector <char> board(9);

    //Function calls
    initVector(board);
    drawBoard(board);


    /// Play until game is over
    while (!boardFull(board) && !gameWon(board)){
        g = getPlay(board);
        if(turn == PLAYER1){
            board.at(g) = 'X';
            turn = PLAYER2;
        }else{
            board.at(g) = 'O';
            turn = PLAYER1;
        } drawBoard(board);
        }
    
    if(gameWon(board)){
        if (turn == PLAYER2){
            cout << "Player 1 (X's) wins!" << endl;
            return 0;
        }else if (turn == PLAYER1){
            cout << "Player 2 (O's) wins!" << endl;
            return 0;
        }
    } else if (boardFull(board) && !gameWon(board)){
        cout << "No one wins" << endl;
        return 0;
    }

}
//Functions Defined
void clearScreen(){
    cout << endl;
    if (CLEAR_SCREEN){
       cout << "\033c";
    }
    cout << endl;
}
void drawBoard(const vector < char >&board){
    clearScreen();
    for (int i = 0; i < 9; i += 3){
        cout << "  " << board.at(i) << "  |  " << board.at(i + 1) << "  |  "
            << board.at(i + 2) << "  " << endl;
    if (i < 6){
            cout << "-----|-----|-----" << endl;
    }
    cout << endl;
}
}
void initVector(vector <char> &v){
    char fill = 'a';
    for (int pos = 0; pos < v.size(); ++pos){
        v.at(pos) = fill;
        fill = fill + 1;
    }
}
int convertPosition(char position){
    int pos = position - 'a';
    return pos;
}
bool validPlacement(const vector <char> &board, int position){
    if (position >= 0 && position <board.size()){ 
        if (board.at(position) == 'X' || board.at(position) == 'O'){
            return false;
        } else
        return true;
    }
    return false;
}
int getPlay(const vector <char> &board){
    char userPos = 'a';
    
    cout << "Please choose a position: ";
    cin >> userPos;
    cout << endl;
    
    int newPos = convertPosition(userPos);
    
    while (!validPlacement(board, newPos)){
        cout << "Please choose a position: ";
        cin >> userPos;
        cout << endl;
        newPos = convertPosition(userPos);
    }
    if (validPlacement(board, newPos)){
        return newPos;
    }else 
    return -1;
}
bool gameWon(const vector <char> &board){
    if (board.at(0) == board.at(1) && board.at(1) == board.at(2)){
        return true;
    }else if (board.at(3) == board.at(4) && board.at(4) == board.at(5)){
        return true;
    }else if (board.at(6) == board.at(7) && board.at(7) == board.at(8)){
        return true;
    }else if (board.at(0) == board.at(3) && board.at(3) == board.at(6)){
        return true;
    }else if (board.at(1) == board.at(4) && board.at(4) == board.at(7)){
        return true;
    }else if (board.at(2) == board.at(5) && board.at(5) == board.at(8)){
        return true;
    }else if (board.at(0) == board.at(4) && board.at(4) == board.at(8)){
        return true;
    }else if (board.at(2) == board.at(4) && board.at(4) == board.at(6)){
        return true;
    }else 
    return false;
}
bool boardFull(const vector <char> &board){
    for (int pos = 0; pos >= 0 && pos < board.size(); pos++){
        if (board.at(pos) != 'X' && board.at(pos) != 'O'){
            return false;
        }
    }return true;
}