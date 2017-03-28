#define _CRT_SECURE_NO_WARNINGS 1
#include"duoziqi.h"


void menu()
{
   printf("**********1.玩游戏**********\n");
   printf("**********0.退出游戏********\n");
}

void game()
{
	char ret = 0;
	char arr[ROW][LINE] = {0};
    init_board(arr);
	do
    {
	    display_board(arr);
		player_move(arr);
		ret=check_win(arr);
		if( ret != ' ')
			break;
		if(check_full(arr)==1)//棋盘已满
		{
			ret='q';
			break;
		}
		computer_move(arr);
		ret=check_win(arr);
		if( ret != ' ')
			break;
		if(check_full(arr)==1)//棋盘已满
		{
			ret='q';
			break;
		}
	}while(ret == ' ');
			
	display_board(arr);
	if(ret == 'A')
	{
		printf("玩家赢得游戏\n");
	}
	else if(ret == 'B')
	{
		printf("电脑赢得游戏\n");
	}
	else if(ret == 'q')
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 1;
	while(input)
    {
	    menu();
		printf("请输入你的选择:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
		  game();
	      break;
		
		case 0:
			break;
		
		default:
			printf("选择错误\n");
			break;
		}
	}
	system("pause");
	return 0;
}
