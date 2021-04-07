#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#define HAN 10
#define SHU 10
void chess(char [HAN][SHU], int , int );
void Init_Game(char[HAN][SHU], int, int);
void player(char[HAN][SHU], int, int);
void ai(char[HAN][SHU], int, int);
void game(char[HAN][SHU], int, int);