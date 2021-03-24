#include <stdio.h>

char board[8][8];

void print() {
  for(int i = 0; i < 8; i++){
      printf("\n");
      for(int j = 0; j < 8; j++)
        printf("%c", board[i][j]);
  }
  printf("\n");
}

void move(char c) {
  int x;
  scanf("%d", &x);
  for(int i = 7; i >= 0; i--){
    if(board[i][x] == '.'){
      board[i][x];
      break;
    }
  }
    
  print();
  if(c == 'R')
    play('B');
  else
    play('R');
}

void play(char c) {
  if(c == 'R')
    move('R');
  else
    move('B');
}

int main() {
  for(int i = 0; i < 8; i++)
    for(int j = 0; j < 8; j++)
      board[i][j];
      
  board[0][0] = 'A';
  board[0][7] = 'B';
  board[7][0] = 'C';
  board[7][7] = 'D';
  
  print();
  move('R');
}
    
