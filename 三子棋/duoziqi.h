#ifndef __DUOZIQI_H__
#define __DUOZIQI_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define LINE 3

void init_board(char arr[ROW][LINE]);       //��ʼ������
int check_full(char arr[ROW][LINE]);        //���ĳ��λ���Ƿ�Ϊ��
void display_board(char arr[ROW][LINE]);    //��ӡ����
void player_move(char arr[ROW][LINE]);      //�����
void computer_move(char arr[ROW][LINE]);    //������
char check_win(char arr[ROW][LINE]);        //�ж���Ӯ

#endif //__DUOZIQI_H__
