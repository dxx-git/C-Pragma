#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"

void menu()
{
	printf("0.exit*************1.print_SeqList*****\n");
	printf("2.pushback*********3.pophback**********\n");
	printf("4.pushfront********5.popfront**********\n");
	printf("6.insert***********7.erase*************\n");
	printf("8.find*************9.remmove***********\n");
	printf("10.remmove_all*****11.empty************\n");
}
int main()
{
   int input = 1;
   SeqList seqlist;
   init_seqlist(&seqlist);
   while(1)
   {
	   menu();
	   printf("请输入你要操作的菜单选项：");
       scanf("%d",&input);
	   switch(input)
	   {
	   case 1:
		   print_seqlist(&seqlist);
		   break;
	   case 2:
		   {
			   Datatype x = 0;
			   printf("请输入你要插入的元素:");
			   scanf("%d",&x);
			   pushback(&seqlist,x);
		   }
		   break;
	   case 3:
		   popback(&seqlist);
		   break;
	   case 4:
			{
				Datatype x = 0;
				printf("请输入你要插入的元素:");
				scanf("%d",&x);
				pushfront(&seqlist,x);
			}
		   break;
	   case 5:
		   popfront(&seqlist);
		   break;
	   case 6:
		   {
			   Datatype x = 0;
			   int pos = 0;
			   printf("请输入你要插入的元素:");
			   scanf("%d",&x);
			   printf("请输入你要插入的位置:");
			   scanf("%d",&pos);
			   insert(&seqlist,pos,x);
		   }
		   break;
	   case 7:
		   {
			   int pos = 0;
			   printf("请输入你要擦除插入的位置:");
			   scanf("%d",&pos);
			   erase(&seqlist,pos);
		   }
		   break;
	   case 8:
		   {
			   int ret = 0;
			   Datatype x = 0;
			   printf("请输入你要查找的元素:");
			   scanf("%d",&x);
			   ret=find(&seqlist,x);
			   if(ret!=-1)
				   printf("你要查找的元素第一次出现的下标为:%d\n",ret);
			   else
				   printf("你要查找的元素不存在\n");
		   }
		   break;
	   case 9:
		   {
			   Datatype x = 0;
			   printf("请输入你要删除的元素:");
			   scanf("%d",&x);
			   remmove(&seqlist,x);
		   }
		   break;
	   case 10:
		   {
			   Datatype x = 0;
			   printf("请输入你要删除的元素:");
			   scanf("%d",&x);
			   remmove_all(&seqlist,x);
		   }
		   break;
	   case 11:
		   empty(&seqlist);
		   break;
	   case 0:
		   exit(0);
		   break;
	   default:
		   printf("参数错误，请重新输入\n");
		   break;
	   }
   }
  
   system("pause");
   return 0;
}