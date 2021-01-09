#include <bits/stdc++.h>
#include <regex>
using namespace std;
// initial variables
map <char,string> pieces = {{' ',"Pawn"},{'N',"Knight"},{'B',"Bishop"},{'R',"Rook"},{'Q',"Queen"},{'K',"King"}}; 
char initRow[8] = {'R','N','B','Q','K','B','N','R'};
char chessboard[9][9];
// init the input PGN file
void IOInit(){
    ios::sync_with_stdio(0);
    cin.tie(0);
}
// init the chess board in normal way
void initChessBoard(){
    for (int i = 1; i <= 8; i++){
        chessboard[2][i] = chessboard[7][i] = 'P';
        chessboard[1][i] = chessboard[8][i] = initRow[i-1];
    };
}
//parsing pgn
int main(){
    initChessBoard();
    
}