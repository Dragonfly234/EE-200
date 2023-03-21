#ifndef PROBLEM1_H
#define PROBLEM1_H
#include <stdio.h>

char check_win(char board[3][3]);
int IsFull(char board[3][3]);// This function is used for checking whether the board is full, if the board is full,
                             //the function will return 1,otherwise the function will return 0.

int IsValid(char board[3][3]);//This function is used for checking whether the board is valid, if one of the member of
                         // is not neither ' ' nor 'x' nor 'o', it will return 0, otherwise the function will return 1.
#endif
