#include<stdio.h>
#define ROW 9
#define COL	9
#define SMP 10

#define ROWS ROW+2
#define COLS COL+2

void game();
void InitBoard(char[ROWS][COLS], int row, int col,char);
void Show(char[ROWS][COLS], int row, int col);
void SetMine(char[ROWS][COLS], int row, int col,int i);
void Play(char[ROWS][COLS], char[ROWS][COLS], int row, int col);
int ShowNumber(char[ROWS][COLS],int x,int y);
void expand(char[ROWS][COLS], char[ROWS][COLS], int row, int col,char);