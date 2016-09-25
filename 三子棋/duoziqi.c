#define _CRT_SECURE_NO_WARNINGS 1
#include"duoziqi.h"


void init_board(char arr[ROW][LINE])
{
   int i = 0;
   int j = 0;
   for(i = 0; i<ROW; i++)
   {
      for(j = 0; j<LINE; j++)
	  {
	     arr[i][j]=' ';
	  }
   }
}

int check_full(char arr[ROW][LINE])
{
   int i = 0;
   int j = 0;
   for(i = 0; i<ROW; i++)
   {
      for(j = 0; j<LINE; j++)
	  {
	     if(arr[i][j]==' ')//棋盘未满
			 return -1;
	  }
   }
   return 1;//棋盘已满
}

void display_board(char arr[ROW][LINE])
{
   int i = 0;
   //int j = 0;
   for(i = 0; i<ROW; i++)
	{
	    for(j = 0; j<LINE; j++)
	   {
	      printf(" %c |\n",arr[i][j]);
		  if(i!=ROW-1)
			 printf("---|\n");
	   } 
	}
   

}

void player_move(char arr[ROW][LINE])
{
	int x = 0;
	int y = 0;
	while(1)
	{
	   printf("请输入坐标(注意行和列的范围1到ROW):");
	   scanf("%d%d",&x,&y);
	   x--;
	   y--;
	   if(x>=0 && x<ROW && y>=0 && y<ROW)
	   {
		   if(arr[x][y] == ' ')
		   {
				arr[x][y] = 'A';
				break;
		   }
		   else
		   {
			  printf("输入的坐标已被占用，请重新输入\n");
			  player_move(arr);
		   }
		}
	}
}

void computer_move(char arr[ROW][LINE])
{
    int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
		while(1)
		{
		   x = rand() % ROW;
		   y = rand() % ROW;
		   if(arr[x][y] == ' ')
		   {
				arr[x][y] = 'B';
				break;
		   }
		   else
		   {   
			   if(check_full(arr)==1)
			       break;
			   else
				   continue;
		   }
		
		}
}


char check_win(char arr[ROW][LINE])/*游戏中判断输赢，返回一个char类型的值*/
{
    int i = 0;
    for(i = 0; i<ROW; i++)//行相同
    {
    	if((arr[i][0]==arr[i][1]) && (arr[i][1]==arr[i][2]) && arr[i][0]!=' ')
    	return arr[i][0];
    }
    for(i = 0; i<LINE; i++)//列相同
    {
    	if((arr[0][i]==arr[1][i]) && (arr[1][i]==arr[2][i]) && arr[0][i]!=' ')
    	return arr[0][i];
    }
    if((arr[0][0]==arr[1][1]) && (arr[1][1]==arr[2][2]) && arr[0][0]!=' ')//主对角线相同
    {
    	return arr[0][0];
    }
    if((arr[0][2]==arr[1][1]) && (arr[1][1]==arr[2][0]) && arr[0][2]!=' ' )//副对角线相同
    {
    	return arr[0][2];
    }
		return ' ';//没赢
}
