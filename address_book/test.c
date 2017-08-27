#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#define P_MAX 1000;
//typedef struct people
//	{
//		char name[20];
//		char sex[10];
//		int age;
//		char tele[11];
//		char address[30];
//	}*p;
//typedef struct contact
//{
//     int count;
//	 typedef struct people[P_MAX];
//
//}*pe;
//
//void my_print()
//{
//   printf("1.	添加联系人信息\
//           2.	删除指定联系人信息\
//           3.	查找指定联系人信息\
//           4.	修改指定联系人信息\
//           5.	显示所有联系人信息\
//           6.	清空所有联系人\
//           7.	以名字排序所有联系人\n");
//}
//void add(struct AB p)
//{
//   int i=0;
//
//
//}
//int main()
//{
//    
//	AB person;
//	my_print();
//}



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define NAME_MAX 20
//#define SEX_MAX 10
//#define TEL_MAX 15
//#define ADDR_MAX 20
//#define PEO_MAX 1000
//typedef struct People
//{
//	char name[NAME_MAX];
//	char sex[SEX_MAX];
//	int age;
//	char tel[TEL_MAX];
//	char addr[ADDR_MAX];
//}*peo;
//typedef struct Contact
//{
//	int count;
//	struct People people[PEO_MAX];
//}*pCon;
//
//
//
//int search(pCon pcon,char *name)
//{
//	int i = 0;
//	for(; i < pcon->count; i++)
//	{
//		if(strcmp(name,pcon->people[i].name) == 0)
//			return i;
//	}
//	return -1;
//}
//void add_peo(pCon pcon)							//添加联系人
//{
//	if(pcon->count == PEO_MAX)
//	{
//		printf("The contact has fullen.");
//		return ;
//	}
//	printf("please input name:  ");
//	scanf("%s",(pcon->people[pcon->count]).name);
//	printf("please input sex :  ");
//	scanf("%s",(pcon->people[pcon->count]).sex);
//	printf("please input age:  ");
//	scanf("%d",&((pcon->people[pcon->count]).age));
//	printf("please input tel:  ");
//	scanf("%s",(pcon->people[pcon->count]).tel);
//	printf("please input address:  ");
//	scanf("%s",(pcon->people[pcon->count]).addr);
//	pcon->count++;
//}
//void del_peo(pCon pcon)							//删除联系人
//{
//	int i;
//	char name[NAME_MAX];
//	printf("please input the people you want to delete:");
//	scanf("%s",name);
//	i = search(pcon,name);
//	if( i == -1)
//		printf("The people doesn't exsit.\n");
//	else if(i == 1000)
//		pcon->count--;
//	else
//	{
//		for(; i < pcon->count; i++)
//			pcon->people[i] = pcon->people[i+1];
//		pcon->count--;
//	}
//}
//void find_peo(pCon pcon)						//查找联系人
//{
//	int i;
//	char name[NAME_MAX];
//	printf("please input the people you want to find:");
//	scanf("%s",name);
//	i = search(pcon,name);
//	if( i == -1)
//		printf("The people doesn't exsit.\n");
//	else
//		printf("%s\t%s\t%d\t%s\t%s\n",
//			pcon->people[i].name,
//			pcon->people[i].sex,
//			pcon->people[i].age,
//			pcon->people[i].tel,
//			pcon->people[i].addr);
//}
//void modify_peo(pCon pcon)						//修改联系人
//{
//	int i;
//	char name[NAME_MAX];
//	printf("please input the people you want to modify:");
//	scanf("%s",name);
//	i = search(pcon,name);
//	if( i == -1)
//		printf("The people doesn't exsit.\n");
//	else
//		printf("please input name:  ");
//	scanf("%s",(pcon->people[i]).name);
//	printf("please input sex :  ");
//	scanf("%s",(pcon->people[i]).sex);
//	printf("please input age:  ");
//	scanf("%d",&((pcon->people[i]).age));
//	printf("please input tel:  ");
//	scanf("%s",(pcon->people[i]).tel);
//	printf("please input address:  ");
//	scanf("%s",(pcon->people[i]).addr);
//}
//void show_peo(pCon pcon)						//显示联系人
//{	
//	int i = 0;
//	for(; i < pcon->count; i++)
//	{
//		printf("%s\t%s\t%d\t%s\t%s\n",
//			pcon->people[i].name,
//			pcon->people[i].sex,
//			pcon->people[i].age,
//			pcon->people[i].tel,
//			pcon->people[i].addr);
//	}
//}
//void clear_peo(pCon pcon)						//清空联系人
//{
//	pcon->count = 0;
//}
//
//void sort_peo(pCon pcon)                    //根据名字排序联系人
//{
//	int i = 0;
//	for(; i < pcon->count; i++)
//	{
//       int ret=strcmp(pcon->people[i].name,pcon->people[i+1].name);
//	   if(ret>=0)
//	   {
//           char	*tmp=*(pcon->people[i]);
//	       strcpy(pcon->people[i].name,pcon->people[i+1].name);
//		   strcpy(pcon->people[i+1].name,tmp);
//	    }
//	   printf("%s\t%s\t%d\t%s\t%s\n",
//			pcon->people[i].name,
//			pcon->people[i].sex,
//			pcon->people[i].age,
//			pcon->people[i].tel,
//			pcon->people[i].addr);
//	   
//	}
//}
//
//void show_menu()							//显示界面
//{
//	printf("1.	添加联系人信息\n");
//    printf("2.	删除指定联系人信息\n");
//	printf("3.	查找指定联系人信息\n");
//	printf("4.	修改指定联系人信息\n");
//	printf("5.	显示所有联系人信息\n");
//	printf("6.	清空所有联系人\n");
//	printf("7.	以名字排序所有联系人\n");          
//            
// }
//int main()
//{
//	struct Contact my_contact;					//定义联系人类
//	int input = 1;
//	my_contact.count = 0;						//联系人数量初始化
//	while(input)							//每次进行循环
//	{
//		show_menu();
//		printf("please input:");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				add_peo(&my_contact);
//				break;
//			case 2:
//				del_peo(&my_contact);
//				break;
//			case 3:
//				find_peo(&my_contact);
//				break;
//			case 4:
//				modify_peo(&my_contact);
//				break;
//			case 5:
//				show_peo(&my_contact);
//				break;
//			case 6:
//				clear_peo(&my_contact);
//				break;
//			default :
//				break;
//		}
//	}
//	return 0;
//}
//
//
//
//
#include<stdio.h>
#include<stdlib.h>
void menu()
{
   printf("1.add    2.sub    3.mul     4.div    0.exit\n");
}
int Add(int num1,int num2)
{
   return num1+num2;
}

int Sub(int num1,int num2)
{
   return num1-num2;
}
int Mul(int num1,int num2)
{
   return num1*num2;
}
int Div(int num1,int num2)
{
   return num1/num2;
}

int main()
{
   int num1=0;
   int num2=0;
   int input=1;
   int ret=0;
menu();
printf("请选择：");
scanf("%d",&input);
printf("\n");
printf("请输入操作数:");
scanf("%d%d",&num1,&num2);
printf("\n");
switch(input)
{
   case 1:
  ret= Add(num1,num2);
break;
   case 2:
  ret= Sub(num1,num2);
break;
   case 3:
  ret= Mul(num1,num2);
break;
  case 4:
  ret=  Div(num1,num2);
break;
   case 0:
break;
default:
printf("选择错误\n");
break;
}
printf("ret=%d\n",ret);
 system("pause");
return 0;
}