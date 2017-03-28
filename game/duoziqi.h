#ifndef __DUOZIQI_H__
#define __DUOZIQI_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define LINE 3

void init_board(char arr[ROW][LINE]);       //初始化棋盘
int check_full(char arr[ROW][LINE]);        //检查某个位置是否为空
void display_board(char arr[ROW][LINE]);    //打印棋盘
void player_move(char arr[ROW][LINE]);      //玩家玩
void computer_move(char arr[ROW][LINE]);    //电脑玩
char check_win(char arr[ROW][LINE]);        //判断输赢

#endif //__DUOZIQI_H__
