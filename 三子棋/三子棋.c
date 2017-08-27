//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#define  ROW  3
//#define  LINE 3
//
//
//void init_board(char arr[ROW][LINE])//初始化棋盘
//{
//	int i=0,j=0;
//	for(i=0;i<ROW;i++)
//		for(j=0;j<LINE;j++)
//		{
//		  arr[ROW][LINE]=' ';
//		}
//}
//
//
//void print_board(char arr[ROW][LINE])//打印棋盘
//{
//	int i=0;
//	for(i=0;i<ROW;i++)
//		
//		{
//		  printf(" %c | %c | %c \n",arr[i][0],arr[i][1],arr[i][2]);
//		  if(i!=2)
//		  {
//			  printf("---|---|---\n");
//		  }
//		}
//
//}
//
//void check_board(char arr[ROW][LINE])//检查棋盘是否已满
//{
//	int i=0,j=0;
//	for(i=0;i<ROW;i++)
//		for(j=0;j<LINE;j++)
//		{
//			void game(char arr[ROW][LINE]);
//			
//            void print_order(char arr[ROW][LINE]);
//			if(arr[ROW][LINE]!=' ')
//				return 0;
//			else 
//				return 1;
//		}
//
//}
//
//
// void player_move(char arr[ROW][LINE])//玩家输入
//{
//	int i,j=0;
//	int row=0,line=0;
//	printf("请输入放旗子位置的坐标：");
//	scanf("%d %d",&row,&line);
//	row--;
//	line--;
//	while(1)
//	{
//			if(arr[row][line]==' ')
//			{ 
//				arr[row][line]='X';
//				print_board(arr);
//		        break;
//			}
//		   else
//		   {
//			   printf("坐标已被占用\n");
//			   continue;
//            }
//	}
// }
//
//
//void computer_move(char arr[ROW][LINE])//电脑输入
//{
//	int ret=0;
//	int i,j=0;
//	int row=0,line=0;
//	scanf("%d%d",&row,&line);
//	srand((unsigned)time(NULL));
//	row=rand()%3;
//	line=rand()%3;
//	while(1)
//	{
//			if( arr[row][line]==' ')
//			{
//				arr[row][line]='Y';
//				print_board(arr);
//		        break;
//			}
//			else
//				printf("坐标已被占用\n");
//			continue;
//	}
//
//
//		
//}
//
//
//void win(char arr[ROW][LINE])//判断输赢
//{
//	int i=0,j=0;
//	for(i=0;i<ROW;i++)
//		for(j=0;j<LINE;j++)
//
//		{
//			
//            char print_order(char arr[ROW][LINE]);
//			void game(char arr[ROW][LINE]);
//			if( ((arr[i][0]==arr[i][1])&&(arr[i][1]==arr[i][2]=='X'))
//			|| ((arr[j][0]==arr[j][1])&&(arr[j][1]==arr[j][2]=='X'))
//			|| ((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[3][3]=='X'))
//			|| ((arr[1][3]==arr[2][2])&&(arr[2][2]==arr[3][1]=='X')) )
//			{
//			
//			printf("玩家赢得游戏！\n");
//			print_order(arr);
//			}
//
//	     	else if(((arr[i][0]==arr[i][1])&&(arr[i][1]==arr[i][2]=='Y'))
//			|| ((arr[j][0]==arr[j][1])&&(arr[j][1]==arr[j][2]=='Y'))
//			|| ((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[3][3]=='Y'))
//			|| ((arr[1][3]==arr[2][2])&&(arr[2][2]==arr[3][1]=='Y')))
//			{
//				printf("电脑赢得游戏！\n");
//			    print_order(arr);
//			}
//			   
//			else
//			{
//				game(arr);
//			    print_order(arr);
//
//			}
//
//		}
//
//	
//}
//
//
//char print_order(char arr[ROW][LINE])//打印菜单
//{
//	int num=0;
//	 printf("*********************\n");
//	 printf("*******棋盘游戏******\n");
//	 printf("*********************\n");
//	printf("请输入数字0或1，输入0游戏结束，输入1游戏继续\n");
//	scanf("%d",&num);
//
//	if(num)
//	{
//		void game(char arr[ROW][LINE]);
//		    game(arr);
//	}
//	else
//		{
//		   ;
//		   return 0;
//		}
//}
//
//
//void game(char arr[ROW][LINE])//游戏过程
//{
//	
//	print_board(arr);
//	player_move(arr);
//    win(arr);
//	computer_move(arr);
//	win(arr);
//}
//
//int main()
//{
//	
//	char arr[ROW][LINE]={' '};
//	void game(char arr[ROW][LINE]);
//	char print_order(char arr[ROW][LINE]);
//	 print_order( arr);
//	 game(arr);
//	 print_orinlcuder( arr);
//	 system("pause");
//
//return 0;
//}

#include<stdio.h>
#define N  34 
int main()
{
	
	int a[N][N]={0};
	int i=0;
	int j=0;
	
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
		{
			a[i][0]=1;
			while( (i>0) && (j>0))
			{
			   if(i==j)
			     {
				     a[i][j]=1;
			      }
			    else
			    {
                   a[i][j]=a[i-1][j-1]+a[i-1][j];
			     }
		       printf("%5d",a[i][j]);
			   while(i==j)
			   {
				   printf("\n");
			    }
		    }
		}
		system("pause");
		return 0;
}