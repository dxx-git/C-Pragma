#define _CRT_SECURE_NO_WARNINGS 1
#include"duoziqi.h"


void menu()
{
   printf("**********1.����Ϸ**********\n");
   printf("**********0.�˳���Ϸ********\n");
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
		if(check_full(arr)==1)//��������
		{
			ret='q';
			break;
		}
		computer_move(arr);
		ret=check_win(arr);
		if( ret != ' ')
			break;
		if(check_full(arr)==1)//��������
		{
			ret='q';
			break;
		}
	}while(ret == ' ');
			
	display_board(arr);
	if(ret == 'A')
	{
		printf("���Ӯ����Ϸ\n");
	}
	else if(ret == 'B')
	{
		printf("����Ӯ����Ϸ\n");
	}
	else if(ret == 'q')
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 1;
	while(input)
    {
	    menu();
		printf("���������ѡ��:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
		  game();
	      break;
		
		case 0:
			break;
		
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	system("pause");
	return 0;
}
