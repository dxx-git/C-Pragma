#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int peach = 0;//��������
//	int rest = 1;//��10 ��ֻʣһ������
//	int day = 9;
//	while(day--)
//	{
//		peach = (rest + 1) * 2;//ÿ������������Ǻ�һ��ʣ�����Ӽ�1��2
//		rest = peach;
//	}
//	printf("���ӵ�һ��һ��ժ��%d������\n",peach);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int peach = 0;//��������
//	int rest = 1;//��10 ��ֻʣһ������
//	int day = 0;
//	for(day = 9; day > 0; day--)
//	{
//		peach = (rest + 1) * 2;//ÿ������������Ǻ�һ��ʣ�����Ӽ�1��2
//		rest = peach;
//	}
//	printf("���ӵ�һ��һ��ժ��%d������\n",peach);
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include <stdlib.h>

int total_peach(int rest)
{
    return (rest+1)*2;
}
int main()
{
	int peach = 0;//��������
	int rest = 1;//��10 ��ֻʣһ������
	int day = 9;
	while(day--)
	{
		peach = total_peach(rest);//�ݹ�ʵ��
		rest = peach;
	}
	printf("���ӵ�һ��һ��ժ��%d������\n",peach);
	system("pause");
	return 0;
}