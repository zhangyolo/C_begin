#define  _CRT_SECURE_NO_WARNINGS 1
#define COL 3  //lie
#define ROW 3 //hang
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char s[ROW][COL]);
void DisplayBoard(char s[ROW][COL]);
void FlaayeMove(char s[ROW][COL]);
void ComputerMove(char s[ROW][COL]);
char IsWin(char s[ROW][COL]);